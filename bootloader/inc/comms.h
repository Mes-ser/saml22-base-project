#ifndef INC_COMMS_H
#define INC_COMMS_H

#include "common_defines.h"

#define PACKET_LENGTH_BYTES (1)
#define PACKET_DATA_LENGTH (16)
#define PACKET_CRC_BYTES (1)
#define PACKET_LENGTH                                                          \
    (PACKET_LENGTH_BYTES + PACKET_DATA_LENGTH + PACKET_CRC_BYTES)

#define PACKET_RETX_DATA0 (0x19)
#define PACKET_ACK_DATA0 (0x15)

#define BL_PACKET_SEQ_OBSERVED_DATA0 (0x20)
#define BL_PACKET_FW_UPDATE_REQ_DATA0 (0x31)
#define BL_PACKET_FW_UPDATE_RSP_DATA0 (0x37)
#define BL_PACKET_DEVICE_ID_REQ_DATA0 (0x3C)
#define BL_PACKET_DEVICE_ID_RSP_DATA0 (0x3F)
#define BL_PACKET_FW_LENGTH_REQ_DATA0 (0x42)
#define BL_PACKET_FW_LENGTH_RSP_DATA0 (0x45)
#define BL_PACKET_READY_FOR_DATA_DATA0 (0x48)
#define BL_PACKET_UPDATE_SUCCESSFUL_DATA0 (0x54)

typedef struct comms_packet_t {
    uint8_t length;
    uint8_t data[PACKET_DATA_LENGTH];
    uint8_t crc;
} comms_packet_t;

void comms_setup(Sercom *sercom);
void comms_update(void);

bool comms_packets_available(void);
void comms_write(comms_packet_t *packet);
void comms_read(comms_packet_t *packet);

uint8_t comms_compute_crc(comms_packet_t *packet);

#endif // INC_COMMS_H
