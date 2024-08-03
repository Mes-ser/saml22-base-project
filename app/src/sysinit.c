#include <inttypes.h>

#include "hal.h"

uint32_t SystemCoreClock = SYS_FREQ;

void SystemInit(void)
{
	SysTick_Config(SystemCoreClock / 1000); // Tick every 1 ms
}