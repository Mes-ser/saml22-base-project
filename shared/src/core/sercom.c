#include <saml22.h>
#include <stddef.h>
#include "common_defines.h"


void uart_write_byte(Sercom *sercom, uint8_t byte)
{
	while (!(sercom->USART.INTFLAG.reg & 0x1))
		;
	sercom->USART.DATA.reg = byte;
}

void uart_write_buf(Sercom *sercom, char *buf, size_t len)
{
	sercom->USART.INTFLAG.reg = 0xFF;
	while (len-- > 0)
		uart_write_byte(sercom, *(uint8_t *)buf++);
	while(sercom->USART.INTFLAG.bit.TXC != 1)
		// Spin
		;
}

void debug_uart_init(Sercom *sercom, unsigned long baud)
{
	if (sercom == SERCOM4)
		MCLK->APBCMASK.bit.SERCOM4_ = 1;
	if (sercom == SERCOM4)
		GCLK->PCHCTRL[20].reg = (1 << 6);
	GCLK->PCHCTRL[15].reg = (1 << 6) | 0x3;

	if (sercom == SERCOM4)
		PORT->Group[2].WRCONFIG.reg = (uint32_t)((1 << 8) | PORT_WRCONFIG_PMUXEN 
			| PORT_WRCONFIG_PMUX(0x3) | PORT_WRCONFIG_WRPMUX 
			| PORT_WRCONFIG_WRPINCFG | PORT_WRCONFIG_HWSEL);

	sercom->USART.CTRLA.bit.SWRST = 0x1;
	while (sercom->USART.SYNCBUSY.bit.SWRST != 0)
		;

	if (sercom->USART.CTRLA.bit.ENABLE != 0)
		sercom->USART.CTRLA.bit.ENABLE = 0;
	sercom->USART.CTRLA.reg = SERCOM_USART_CTRLA_DORD | SERCOM_USART_CTRLA_MODE(1) | SERCOM_USART_CTRLA_TXPO(1);
	sercom->USART.BAUD.reg = (uint16_t)((uint64_t)65536 * (SYS_FREQ - 16 * baud) / SYS_FREQ) + 1;

	sercom->USART.CTRLB.bit.TXEN = 1;

	while (sercom->USART.SYNCBUSY.bit.CTRLB)
		;

	sercom->USART.CTRLA.bit.ENABLE = 1;
	while (sercom->USART.SYNCBUSY.bit.ENABLE)
		;
}