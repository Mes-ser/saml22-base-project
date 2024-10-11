#pragma once

#include "saml22.h"
#include "core_cm0plus.h"

#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>

#define SYS_FREQ 16000000
// #define SYS_FREQ 4000000

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

// TIMERS

static inline void test(void)
{
	TC0->COUNT16.CTRLA;
}

// SERCOM

static inline void uart_write_byte(Sercom *sercom, uint8_t byte)
{
	while (!(sercom->USART.INTFLAG.reg & 0x1))
		;
	sercom->USART.DATA.reg = byte;
}

static inline void uart_write_buf(Sercom *sercom, char *buf, size_t len)
{
	while (len-- > 0)
		uart_write_byte(sercom, *(uint8_t *)buf++);
}

static inline void debug_uart_init(Sercom *sercom, unsigned long baud)
{
	if (sercom == SERCOM4)
		MCLK->APBCMASK.bit.SERCOM4_ = 1;
	if (sercom == SERCOM4)
		GCLK->PCHCTRL[20].reg = (1 << 6);
	GCLK->PCHCTRL[15].reg = (1 << 6) | 0x3;

	if (sercom == SERCOM4)
		PORT->Group[2].WRCONFIG.reg = (uint32_t)((1 << 8) | PORT_WRCONFIG_PMUXEN 
			| PORT_WRCONFIG_PMUX(0x3) | PORT_WRCONFIG_WRPMUX 
			| PORT_WRCONFIG_WRPINCFG | PORT_WRCONFIG_HWSEL);

	sercom->USART.CTRLA.bit.SWRST = 0x1;
	while (sercom->USART.SYNCBUSY.bit.SWRST != 0)
		;

	if (sercom->USART.CTRLA.bit.ENABLE != 0)
		sercom->USART.CTRLA.bit.ENABLE = 0;
	sercom->USART.CTRLA.reg = SERCOM_USART_CTRLA_DORD | SERCOM_USART_CTRLA_MODE(1) | SERCOM_USART_CTRLA_TXPO(1);
	sercom->USART.BAUD.reg = (uint16_t)((uint64_t)65536 * (SYS_FREQ - 16 * baud) / SYS_FREQ) + 1;

	sercom->USART.CTRLB.bit.TXEN = 1;

	while (sercom->USART.SYNCBUSY.bit.CTRLB)
		;

	sercom->USART.CTRLA.bit.ENABLE = 1;
	while (sercom->USART.SYNCBUSY.bit.ENABLE)
		;
}