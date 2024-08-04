#include <inttypes.h>
#include <stdbool.h>

#include "hal.h"

static volatile uint32_t s_ticks; // volatile is important!!
void SysTick_Handler(void)
{
	s_ticks++;
}

int main(void)
{
	OSC32KCTRL->XOSC32K.bit.STARTUP = 0x4;
	OSC32KCTRL->XOSC32K.bit.XTALEN = true;
	OSC32KCTRL->XOSC32K.bit.EN32K = true;
	OSC32KCTRL->XOSC32K.bit.ONDEMAND = false;
	OSC32KCTRL->XOSC32K.bit.ENABLE = true;
	while (OSC32KCTRL->STATUS.bit.XOSC32KRDY == 0)
	{
	}

	GCLK->GENCTRL[0].bit.GENEN = true;
	GCLK->GENCTRL[0].bit.SRC = 0x4;

	uint16_t led = PIN('C', 27); // user_led0
	port_dir(led, GPIO_DIR_OUTPUT);

	uint32_t timer = 0, period = 1000;
	for (;;)
	{
		if (timer_expired(&timer, period, s_ticks))
		{
			port_output_toggle(led);
		}
	};
}