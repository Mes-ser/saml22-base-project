#ifndef INC_PORT_H
#define INC_PORT_H

#include "common_defines.h"

#define BIT(x) (1UL << (x))
#define PIN(bank, num) ((((bank) - 'A') << 8) | (num))
#define PINNO(pin) (pin & 255)
#define PINBANK(pin) (pin >> 8)

enum
{
    GPIO_DIR_INPUT,
    GPIO_DIR_OUTPUT
};

void port_dir_set(uint16_t);
void port_dir_clear(uint16_t);
void port_dir(uint16_t, uint8_t);
void port_output_toggle(uint16_t);

#endif // INC_PORT_H
