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
	
	SERCOM4->USART.CTRLA.bit.SWRST = 0x1;
	while(SERCOM4->USART.SYNCBUSY.bit.SWRST != 0)
		;
	
	if(SERCOM4->USART.CTRLA.bit.ENABLE != 0)
		SERCOM4->USART.CTRLA.bit.ENABLE = 0;

	uint16_t led = PIN('C', 27); // user_led0
	port_dir(led, GPIO_DIR_OUTPUT);

	uint32_t timer = 0, period = 100;
	for (;;)
	{
		if (timer_expired(&timer, period, s_ticks))
		{
			port_output_toggle(led);
		}
	};
}