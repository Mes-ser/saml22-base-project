#include <inttypes.h>

#include "hal.h"

uint32_t SystemCoreClock = SYS_FREQ;

void mcu_init(void)
{

	PM->INTFLAG.reg = 0xFF;
	PM->PLCFG.reg |= 0x2;
	while (!PM->INTFLAG.reg);


	// OSC32KCTRL->XOSC32K.reg = (0x07 << OSC32KCTRL_XOSC32K_STARTUP_Pos 
	// 	| 0x0 << OSC32KCTRL_XOSC32K_ONDEMAND_Pos
	// 	| 0x0 << OSC32KCTRL_XOSC32K_RUNSTDBY_Pos
	// 	| 0x0 << OSC32KCTRL_XOSC32K_EN1K_Pos
	// 	| 0x1 << OSC32KCTRL_XOSC32K_EN32K_Pos
	// 	| 0x1 << OSC32KCTRL_XOSC32K_XTALEN_Pos 
	// 	| 0x1 << OSC32KCTRL_XOSC32K_ENABLE_Pos );

	// while (OSC32KCTRL->STATUS.bit.XOSC32KRDY == 0);

	OSCCTRL->OSC16MCTRL.reg = (0x1 << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos 
		| 0x0 << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos
		| 0x1 << OSCCTRL_OSC16MCTRL_ENABLE_Pos
		| 0x3 << OSCCTRL_OSC16MCTRL_FSEL_Pos);
	
	while(OSCCTRL->STATUS.bit.OSC16MRDY == 0);

	// GCLK->GENCTRL[0].reg = (0x01 << GCLK_GENCTRL_DIV_Pos
	// 	| 0x0 << GCLK_GENCTRL_RUNSTDBY_Pos
	// 	| 0x0 << GCLK_GENCTRL_DIVSEL_Pos
	// 	| 0x0 << GCLK_GENCTRL_OE_Pos
	// 	| 0x0 << GCLK_GENCTRL_OOV_Pos
	// 	| 0x0 << GCLK_GENCTRL_IDC_Pos
	// 	| 0x1 << GCLK_GENCTRL_GENEN_Pos
	// 	| GCLK_GENCTRL_SRC_XOSC32K_Val << GCLK_GENCTRL_SRC_Pos);
	
	// while(GCLK->SYNCBUSY.bit.GENCTRL != 0);


	SysTick_Config(SystemCoreClock / 1000); // Tick every 1 ms
}