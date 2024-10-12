#include <inttypes.h>
#include <stdbool.h>

#include "hal.h"

static volatile uint32_t s_ticks; // volatile is important!!
void SysTick_Handler(void)
{
	s_ticks++;
}

void mcu_init(void);

int main(void)
{
	mcu_init();
	debug_uart_init(SERCOM4, 115200);

	uint16_t led = PIN('C', 27); // user_led0
	port_dir(led, GPIO_DIR_OUTPUT);

	uint32_t timer = 0, period = 1000;

	for (;;)
	{
		if (timer_expired(&timer, period, s_ticks))
		{
			port_output_toggle(led);
			uart_write_buf(SERCOM4, "Hello World\n", 12);
		}
	};
}