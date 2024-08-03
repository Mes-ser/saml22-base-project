#include <inttypes.h>
#include <stdbool.h>

#include "saml22.h"
#include "hal.h"

// PC27 USER_LED0

static volatile uint32_t s_ticks; // volatile is important!!
void SysTick_Handler(void)
{
	s_ticks++;
}

int main(void)
{
	uint16_t led = PIN('C', 27);
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