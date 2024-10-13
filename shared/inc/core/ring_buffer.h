#ifndef INC_RING_BUFFER_H
#define INC_RING_BUFFER_H

#include "common_defines.h"

typedef struct ring_buffer_t
{
    uint8_t* buffer;
    uint32_t mask;
    uint32_t readIndex;
    uint32_t writeIndex;
} ring_buffer_t;

void init_ring_buffer(ring_buffer_t* ringBuffer, uint8_t* buffer, uint32_t size);
bool ring_buffer_empty(ring_buffer_t* ringBuffer);
bool ring_buffer_write(ring_buffer_t* ringBuffer, uint8_t byte);
bool ring_buffer_read(ring_buffer_t* ringBuffer, uint8_t* byte);


#endif // INC_RING_BUFFER_H