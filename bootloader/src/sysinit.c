#include <inttypes.h>

#include "hal.h"

uint32_t SystemCoreClock = SYS_FREQ;

void mcu_init(void)
{

	PM->INTFLAG.reg = 0xFF;
	if (!(PM->PLCFG.reg & 0x2))
	{
		PM->PLCFG.reg |= 0x2;
		while (!PM->INTFLAG.reg)
			;
	}

	SysTick_Config(SystemCoreClock / 1000); // Tick every 1 ms
}