#include "mcu_conf.h"

void mcu_init(void)
{

	PM->INTFLAG.reg = 0xFF;
	if (!(PM->PLCFG.reg & 0x2))
	{
		PM->PLCFG.reg |= 0x2;
		while (!PM->INTFLAG.reg)
			;
	}

	OSCCTRL->OSC16MCTRL.reg = (0x1 << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos 
		| 0x0 << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos
		| 0x1 << OSCCTRL_OSC16MCTRL_ENABLE_Pos
		| 0x3 << OSCCTRL_OSC16MCTRL_FSEL_Pos);
	
	while(OSCCTRL->STATUS.bit.OSC16MRDY == 0);

	SysTick_Config(SYS_FREQ / 1000); // Tick every 1 ms
}