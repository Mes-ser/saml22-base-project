#ifndef INC_SERCOM_H
#define INC_SERCOM_H

#include "common_defines.h"

void SERCOM4_Handler(void);

void sercom_uart_init(Sercom *sercom, unsigned long baud);
void uart_write_byte(Sercom *sercom, uint8_t byte);
void uart_write_buf(Sercom *sercom, char *buf, size_t len);

uint8_t uart_read_byte(void);
uint32_t uart_read(uint8_t *buf, const uint32_t len);

bool uart_data_available(void);

#endif // INC_SERCOM_H