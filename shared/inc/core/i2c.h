#ifndef INC_I2C_H
#define INC_I2C_H

#include "common_defines.h"

void i2c_init(Sercom *sercom);
void i2c_write_byte(Sercom *sercom, uint8_t byte);
void i2c_write_buf(Sercom *sercom, char *buf, size_t len);

uint8_t i2c_read_byte(void);
uint32_t i2c_read(uint8_t *buf, const len);

bool i2c_data_available(void);

#endif
