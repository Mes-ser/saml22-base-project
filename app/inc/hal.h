#pragma once

#include "saml22.h"
#include "core_cm0plus.h"


#include <inttypes.h>
#include <stdbool.h>

#define SYS_FREQ 32786

#define BIT(x) (1UL << (x))
#define PIN(bank, num) ((((bank) - 'A') << 8) | (num))
#define PINNO(pin) (pin & 255)
#define PINBANK(pin) (pin >> 8)

enum
{
	GPIO_DIR_INPUT,
	GPIO_DIR_OUTPUT
};

static inline void port_dir_set(uint16_t pin)
{
	int n = PINNO(pin);
	PORT->Group[PINBANK(pin)].DIRSET.reg = 1 << n;
}

static inline void port_dir_clear(uint16_t pin)
{
	int n = PINNO(pin);
	PORT->Group[PINBANK(pin)].DIRCLR.reg = 1 << n;
}

static inline void port_dir(uint16_t pin, uint8_t dir)
{

	int n = PINNO(pin);
	PORT->Group[PINBANK(pin)].DIR.reg |= dir << n;
}

static inline void port_output_toggle(uint16_t pin)
{
	int n = PINNO(pin);
	PORT->Group[PINBANK(pin)].OUTTGL.reg = 1 << n;
}

// PORT + ([y] * 0x4)

// SYSTICK
static inline void systick_init(uint32_t ticks)
{
	if ((ticks - 1) > 0xffffff)
		return; // Systick timer is 24 bit
	SysTick->LOAD = ticks - 1;
	SysTick->VAL = 0;
	SysTick->CTRL = BIT(0) | BIT(1) | BIT(2); // Enable systick
}

// t: expiration time, prd: period, now: current time. Return true if expired
static inline bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now)
{
	if (now + prd < *t)
		*t = 0; // Time wrapped? Reset timer
	if (*t == 0)
		*t = now + prd; // First poll? Set expiration
	if (*t > now)
		return false;							  // Not expired yet, return
	*t = (now - *t) > prd ? now + prd : *t + prd; // Next expiration time
	return true;								  // Expired, return true
}