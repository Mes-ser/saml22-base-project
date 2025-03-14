#include "bl_flash.h"
#include "comms.h"
#include "core/port.h"
#include "core/sercom.h"
#include "core/simple_timer.h"
#include "core/system.h"
#include "mcu_conf.h"

#define BAUD_RATE (115200)
#define BAUD (((uint64_t)65536 * (SYS_FREQ - 16 * BAUD_RATE) / SYS_FREQ) + 1)

#define DEVICE_ID (0x42)

#define SYNC_SEQ_0 (0xc4)
#define SYNC_SEQ_1 (0x55)
#define SYNC_SEQ_2 (0x7e)
#define SYNC_SEQ_3 (0x10)

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
static uint32_t   fw_length = 0;
static uint32_t   bytes_written = 0;

static uint8_t sync_seq[4] = {0};

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

    uint16_t led = PIN('C', 27); // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    uint32_t timer = 0, period = 100;

    uart_write_buf(SERCOM4, "Welcome in bootloader.\n", 23);

    // if (bl_flash_erase_main_app(SIZE))
    // {
    //     uart_write_buf(SERCOM4, "Main App space erased.\n", 23);
    // }
    // else
    // {
    //     uart_write_buf(SERCOM4, "Error while erasing Main App space.\n", 36);
    //     __asm__("BKPT #0");
    // };

    // if (bl_flash_write(0x8000U, data, SIZE))
    // {
    //     uart_write_buf(SERCOM4, "Data written.\n", 14);
    // }
    // else
    // {
    //     uart_write_buf(SERCOM4, "Write error.\n", 13);
    // }

    simple_timer_t timer;

    while (true) {
        if (state == BL_State_Sync) {
            if (uart_data_available()) {
            }
        }
    }

    uart_write_buf(SERCOM4, "Jumping to App.\n", 16);
    jump_to_main();

    // Never returns;
    return 0;
}
