#ifndef INC_SERCOM_H
#define INC_SERCOM_H

#include <saml22.h>
#include <stddef.h>

void uart_write_byte(Sercom *, uint8_t);
void uart_write_buf(Sercom *, char *, size_t);
void debug_uart_init(Sercom *, unsigned long);

#endif // INC_SERCOM_H