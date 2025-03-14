#include "core/ring_buffer.h"

void init_ring_buffer(ring_buffer_t *ringBuffer, uint8_t *buffer,
                      uint32_t size) {
    ringBuffer->buffer = buffer;
    ringBuffer->readIndex = 0;
    ringBuffer->writeIndex = 0;
    ringBuffer->mask = size - 1;
}
bool ring_buffer_empty(ring_buffer_t *ringBuffer) {
    return ringBuffer->readIndex == ringBuffer->writeIndex;
}
bool ring_buffer_write(ring_buffer_t *ringBuffer, uint8_t byte) {
    uint32_t localReadIndex = ringBuffer->readIndex;
    uint32_t localWriteIndex = ringBuffer->writeIndex;

    uint32_t nextWriteIndex = (localWriteIndex + 1) & ringBuffer->mask;

    if (nextWriteIndex == localReadIndex) {
        return false;
    }

    ringBuffer->buffer[localWriteIndex] = byte;
    ringBuffer->writeIndex = nextWriteIndex;
    return true;
}

bool ring_buffer_read(ring_buffer_t *ringBuffer, uint8_t *byte) {
    uint32_t localReadIndex = ringBuffer->readIndex;
    uint32_t localWriteIndex = ringBuffer->writeIndex;

    if (localReadIndex == localWriteIndex) {
        return false;
    }

    *byte = ringBuffer->buffer[localReadIndex];
    localReadIndex = (localReadIndex + 1) & ringBuffer->mask;
    ringBuffer->readIndex = localReadIndex;

    return true;
}
