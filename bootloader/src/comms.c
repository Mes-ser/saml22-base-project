#include "comms.h"
#include "core/sercom.h"
#include "core/crc.h"

#define PACKET_BUFFER_SIZE (8)

typedef enum comms_stage_t
{
    CommsStage_Length,
    CommsStage_Data,
    CommsStage_CRC,
} comms_stage_t;

static comms_stage_t stage = CommsStage_Length;
static uint8_t data_byte_count = 0;

static comms_packet_t temporary_packet = {.length = 0, .data = {0}, .crc = 0};
static comms_packet_t retx_packet = {.length = 0, .data = {0}, .crc = 0};
static comms_packet_t ack_packet = {.length = 0, .data = {0}, .crc = 0};
static comms_packet_t last_transsmited_packet = {.length = 0, .data = {0}, .crc = 0};

static comms_packet_t packet_buffer[PACKET_BUFFER_SIZE];
static uint32_t packet_read_index = 0;
static uint32_t packet_write_index = 0;
static uint32_t packet_buffer_mask = PACKET_BUFFER_SIZE - 1;

static Sercom *interface;

static bool comms_is_single_byte_packet(const comms_packet_t *packet, const uint8_t byte)
{
    if (packet->length != 1)
    {
        return false;
    }

    if (packet->data[0] != byte)
    {
        return 0;
    }

    for (uint8_t i = 1; i < PACKET_DATA_LENGTH; i++)
    {
        if (packet->data[i] != 0xFF)
        {
            return false;
        }
    }

    return true;
}

static void comms_packet_copy(const comms_packet_t *source, comms_packet_t *destination)
{
    destination->length = source->length;
    for (uint8_t i = 0; i < PACKET_DATA_LENGTH; i++)
    {
        destination->data[i] = source->data[i];
    }
    destination->crc = source->crc;
}

void comms_setup(Sercom *sercom)
{
    interface = sercom;

    retx_packet.length = 1;
    retx_packet.data[0] = PACKET_RETX_DATA0;
    for (uint8_t i = 1; i < PACKET_DATA_LENGTH; i++)
    {
        retx_packet.data[i] = 0xFF;
    }
    retx_packet.crc = comms_compute_crc(&retx_packet);

    ack_packet.length = 1;
    ack_packet.data[0] = PACKET_ACK_DATA0;
    for (uint8_t i = 1; i < PACKET_DATA_LENGTH; i++)
    {
        ack_packet.data[i] = 0xFF;
    }
    ack_packet.crc = comms_compute_crc(&ack_packet);
}

void comms_update(void)
{
    while (uart_data_available())
    {
        switch (stage)
        {
        case CommsStage_Length:
        {
            temporary_packet.length = uart_read_byte();
            stage = CommsStage_Data;
        }
        break;
        case CommsStage_Data:
        {
            temporary_packet.data[data_byte_count++] = uart_read_byte();
            if (data_byte_count >= PACKET_DATA_LENGTH)
            {
                data_byte_count = 0;
                stage = CommsStage_CRC;
            }
        }
        break;
        case CommsStage_CRC:
        {
            temporary_packet.crc = uart_read_byte();

            if (temporary_packet.crc != comms_compute_crc(&temporary_packet))
            {
                comms_write(&retx_packet);
                stage = CommsStage_Length;
                break;
            }

            if (comms_is_single_byte_packet(&temporary_packet, PACKET_RETX_DATA0))
            {
                comms_write(&last_transsmited_packet);
                stage = CommsStage_Length;
                break;
            }

            if (comms_is_single_byte_packet(&temporary_packet, PACKET_ACK_DATA0))
            {
                stage = CommsStage_Length;
                break;
            }

            uint32_t next_write_index = (packet_write_index + 1) & packet_buffer_mask;
            if (next_write_index == packet_read_index)
            {
                __asm__("BKPT #0");
            }
            comms_packet_copy(&temporary_packet, &packet_buffer[packet_write_index]);
            packet_write_index = next_write_index;
            comms_write(&ack_packet);
            stage = CommsStage_Length;
        }
        break;
        default:
        {
            stage = CommsStage_Length;
        }
        break;
        }
    }
}

bool comms_packets_available(void)
{
    return packet_read_index != packet_write_index;
}
void comms_write(comms_packet_t *packet)
{
    uart_write_buf(interface, (char *)packet, PACKET_LENGTH);
}
void comms_read(comms_packet_t *packet)
{
    comms_packet_copy(&packet_buffer[packet_read_index], packet);
    packet_read_index = (packet_read_index + 1) & packet_buffer_mask;
}

uint8_t comms_compute_crc(comms_packet_t *packet)
{
    return crc8((uint8_t *)packet, PACKET_LENGTH - PACKET_CRC_BYTES);
}