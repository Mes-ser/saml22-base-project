#include <inttypes.h>

#include "core/system.h"
#include "core/port.h"
#include "core/sercom.h"

void mcu_init(void);

int main(void)
{
	mcu_init();
	debug_uart_init(SERCOM4, 115200);

	uint16_t led = PIN('C', 27); // user_led0
	port_dir(led, GPIO_DIR_OUTPUT);

	uint32_t timer = 0, period = 1000;

	uart_write_buf(SERCOM4, "Welcome in App.\n", 16);

	for (;;)
	{
		if (timer_expired(&timer, period, get_system_ticks()))
		{
			port_output_toggle(led);
		}
	};
}