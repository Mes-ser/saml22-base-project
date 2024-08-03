#include <inttypes.h>
#include <stdbool.h>

#include "saml22.h"

#define BIT(x) (1UL << (x))
#define PIN(bank, num) ((((bank) - 'A') << 8) | (num))
#define PINNO(pin) (pin & 255)
#define PINBANK(pin) (pin >> 8)

// PC27 USER_LED0

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

static volatile uint32_t s_ticks; // volatile is important!!
void SysTick_Handler(void)
{
	s_ticks++;
}
// t: expiration time, prd: period, now: current time. Return true if expired
bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now)
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

void SystemInit(void)
{
	SysTick_Config(SystemCoreClock / 1000); // Tick every 1 ms
}

int main(void)
{
	uint16_t led = PIN('C', 27);
	port_dir(led, GPIO_DIR_OUTPUT);

	systick_init(8000000 / 1000);

	uint32_t timer, period = 500;
	for (;;)
	{
		if (timer_expired(&timer, period, s_ticks))
		{
			port_output_toggle(led);
		}
	};
}

// // Startup code
// __attribute__((naked, noreturn)) void _reset(void)
// {
// 	// memset .bss to zero, and copy .data section to RAM region
// 	extern long _sbss, _ebss, _sdata, _edata, _sidata;
// 	for (long *dst = &_sbss; dst < &_ebss; dst++)
// 		*dst = 0;
// 	for (long *dst = &_sdata, *src = &_sidata; dst < &_edata;)
// 		*dst++ = *src++;

// 	main(); // Call main()
// 	for (;;)
// 		(void)0; // Infinite loop in the case if main() returns
// }

// extern void _estack(void); // Defined in link.ld

// // 16 standard and 91 STM32-specific handlers
// __attribute__((section(".vectors"))) void (*const tab[16 + 32])(void) = {
// 	_estack, _reset, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, SysTick_Handler};