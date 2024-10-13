#include "core/system.h"

void SysTick_Handler(void)
{
	s_ticks++;
}

uint32_t get_system_ticks(void)
{
	return s_ticks;
}

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

inline bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now)
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