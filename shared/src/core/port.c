#include "core/port.h"

void port_dir_set(uint16_t pin)
{
    int n = PINNO(pin);
    PORT->Group[PINBANK(pin)].DIRSET.reg = 1 << n;
}

void port_dir_clear(uint16_t pin)
{
    int n = PINNO(pin);
    PORT->Group[PINBANK(pin)].DIRCLR.reg = 1 << n;
}

void port_dir(uint16_t pin, uint8_t dir)
{
    int n = PINNO(pin);
    PORT->Group[PINBANK(pin)].DIR.reg |= dir << n;
}

void port_output_toggle(uint16_t pin)
{
    int n = PINNO(pin);
    PORT->Group[PINBANK(pin)].OUTTGL.reg = 1 << n;
}