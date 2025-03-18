#include <string.h>

#include "bl_flash.h"
#include "comms.h"
#include "core/port.h"
#include "core/sercom.h"
#include "core/simple_timer.h"
#include "core/system.h"
#include "mcu_conf.h"

#define BAUD_RATE (115200)
#define BAUD (((uint64_t)65536 * (SYS_FREQ - 16 * BAUD_RATE) / SYS_FREQ) + 1)

#define MAX_FW_LENGTH (FLASH_SIZE - BOOTLOADER_END)

#define DEVICE_ID (0x42)

#define SYNC_SEQ_0 (0xc4)
#define SYNC_SEQ_1 (0x55)
#define SYNC_SEQ_2 (0x7e)
#define SYNC_SEQ_3 (0x10)

#define DEFAULT_TIMEOUT (5000)

typedef enum bl_state_t {
    BL_State_Sync,
    BL_State_WaitForUpdateReq,
    BL_State_DeviceIDReq,
    BL_State_DeviceIDRsp,
    BL_State_FWLengthReq,
    BL_State_FWLengthRsp,
    BL_State_EraseApp,
    BL_State_ReceiveFirmware,
    BL_State_Done,
} bl_state_t;

static bl_state_t state = BL_State_Sync;
static uint32_t fw_length = 0;
static uint32_t bytes_written = 0;

static uint8_t sync_seq[4] = {0};
static simple_timer_t timer;
static comms_packet_t temp_packet;

static void bootloading_failure(void) {
    comms_create_single_byte_packet(&temp_packet, BL_PACKET_NACK_DATA0);
    comms_write(&temp_packet);
    state = BL_State_Done;
}
static void check_for_timeout(void) {
    if (simple_timer_has_elapsed(&timer)) {
        bootloading_failure();
    }
}

static bool is_device_id_packet(const comms_packet_t *packet) {
    if (packet->length != 2) {
        return false;
    }

    if (packet->data[0] != BL_PACKET_DEVICE_ID_RSP_DATA0) {
        return false;
    }
    for (uint8_t i = 2; i < PACKET_DATA_LENGTH; i++) {
        if (packet->data[i] != 0xFF) {
            return false;
        }
    }

    return true;
}

static bool is_fw_length_packet(const comms_packet_t *packet) {
    if (packet->length != 5) {
        return false;
    }

    if (packet->data[0] != BL_PACKET_FW_LENGTH_RSP_DATA0) {
        return 0;
    }
    for (uint8_t i = 5; i < PACKET_DATA_LENGTH; i++) {
        if (packet->data[i] != 0xFF) {
            return false;
        }
    }

    return true;
}

void jump_to_main(void) {
    typedef void (*void_fn)(void);
    uint32_t *reset_vector_entry = (uint32_t *)(APP_RESET_HANDLER + 4u);
    uint32_t *reset_vector = (uint32_t *)(*reset_vector_entry);

    void_fn jump_fn = (void_fn)reset_vector;

    jump_fn();
}

#define SIZE (1029)

int main(void) {
    mcu_init();
    sercom_uart_init(SERCOM4, BAUD);
    comms_setup(SERCOM4);

    uint16_t led = PIN('C', 27);  // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    simple_timer_init(&timer, DEFAULT_TIMEOUT, false);

    while (state != BL_State_Done) {
        if (state == BL_State_Sync) {
            if (uart_data_available()) {
                sync_seq[0] = sync_seq[1];
                sync_seq[1] = sync_seq[2];
                sync_seq[2] = sync_seq[3];
                sync_seq[3] = uart_read_byte();

                bool is_match = sync_seq[0] == SYNC_SEQ_0 && sync_seq[1] == SYNC_SEQ_1 && sync_seq[2] == SYNC_SEQ_2 &&
                                sync_seq[3] == SYNC_SEQ_3;

                if (is_match) {
                    comms_create_single_byte_packet(&temp_packet, BL_PACKET_SYNC_OBSERVED_DATA0);
                    comms_write(&temp_packet);
                    simple_timer_reset(&timer);
                    state = BL_State_WaitForUpdateReq;
                } else {
                    check_for_timeout();
                }
            } else {
                check_for_timeout();
            }
            continue;
        }

        comms_update();

        switch (state) {
            case BL_State_WaitForUpdateReq: {
                if (comms_packets_available()) {
                    comms_read(&temp_packet);
                    if (comms_is_single_byte_packet(&temp_packet, BL_PACKET_FW_UPDATE_REQ_DATA0)) {
                        simple_timer_reset(&timer);
                        comms_create_single_byte_packet(&temp_packet, BL_PACKET_FW_UPDATE_RSP_DATA0);
                        comms_write(&temp_packet);
                        state = BL_State_DeviceIDReq;
                    } else {
                        bootloading_failure();
                    }
                } else {
                    check_for_timeout();
                }
            } break;
            case BL_State_DeviceIDReq: {
                comms_create_single_byte_packet(&temp_packet, BL_PACKET_DEVICE_ID_REQ_DATA0);
                comms_write(&temp_packet);
                simple_timer_reset(&timer);
                state = BL_State_DeviceIDRsp;
            } break;
            case BL_State_DeviceIDRsp: {
                if (comms_packets_available()) {
                    comms_read(&temp_packet);
                    if (is_device_id_packet(&temp_packet) && (temp_packet.data[1] == DEVICE_ID)) {
                        comms_create_single_byte_packet(&temp_packet, BL_PACKET_DEVICE_ID_RSP_DATA0);
                        comms_write(&temp_packet);
                        simple_timer_reset(&timer);
                        state = BL_State_FWLengthReq;
                    } else {
                        bootloading_failure();
                    }
                } else {
                    check_for_timeout();
                }
            } break;
            case BL_State_FWLengthReq: {
                comms_create_single_byte_packet(&temp_packet, BL_PACKET_FW_LENGTH_REQ_DATA0);
                comms_write(&temp_packet);
                simple_timer_reset(&timer);
                state = BL_State_FWLengthRsp;
            } break;
            case BL_State_FWLengthRsp: {
                if (comms_packets_available()) {
                    comms_read(&temp_packet);

                    fw_length = ((temp_packet.data[1]) | (temp_packet.data[2] << 8) | (temp_packet.data[3] << 16) |
                                 (temp_packet.data[4] << 24));

                    if (is_fw_length_packet(&temp_packet) && (fw_length <= MAX_FW_LENGTH)) {
                        comms_create_single_byte_packet(&temp_packet, BL_PACKET_FW_LENGTH_RSP_DATA0);
                        comms_write(&temp_packet);
                        simple_timer_reset(&timer);
                        state = BL_State_EraseApp;
                    } else {
                        bootloading_failure();
                    }
                } else {
                    check_for_timeout();
                }
            } break;
            case BL_State_EraseApp: {
                bl_flash_erase_main_app((uint16_t)fw_length);
                comms_create_single_byte_packet(&temp_packet, BL_PACKET_READY_FOR_DATA_DATA0);
                comms_write(&temp_packet);
                simple_timer_reset(&timer);
                state = BL_State_ReceiveFirmware;
            } break;

            case BL_State_ReceiveFirmware: {
                if (comms_packets_available()) {
                    comms_read(&temp_packet);

                    const uint8_t packet_length = (temp_packet.length & 0xF) + 1;
                    if (bl_flash_write(BOOTLOADER_END + bytes_written, temp_packet.data, packet_length)) {
                        simple_timer_reset(&timer);
                        comms_create_single_byte_packet(&temp_packet, BL_PACKET_READY_FOR_DATA_DATA0);
                        comms_write(&temp_packet);
                        bytes_written += packet_length;
                        if (bytes_written >= fw_length) {
                            state = BL_State_Done;
                        }
                    } else {
                        bootloading_failure();
                    }
                } else {
                    check_for_timeout();
                }
            } break;
            default: {
                state = BL_State_Sync;
            }
        }
    }

    // TODO: Teardown
    port_output_toggle(led);
    jump_to_main();

    // Never returns;
    return 0;
}

void HardFault_Handler(void) {
    while (1) {
        __asm__("BKPT");
    }
}
