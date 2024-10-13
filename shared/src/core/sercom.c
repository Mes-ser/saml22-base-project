#include "core/sercom.h"
#include "core/ring_buffer.h"

#define RING_BUFFER_SIZE (32)

static uint8_t dataBuffer[RING_BUFFER_SIZE] = {0U};

static ring_buffer_t ringBuffer = {0U};

void SERCOM4_Handler(void)
{
	if (SERCOM4->USART.INTFLAG.bit.RXC != 0)
	{
		if (ring_buffer_write(&ringBuffer, (uint8_t)(SERCOM4->USART.DATA.reg)))
		{
			// How to handle?
		}
	}
}

void sercom_uart_init(Sercom *sercom, unsigned long baud)
{

	init_ring_buffer(&ringBuffer, dataBuffer, RING_BUFFER_SIZE);

	if (sercom == SERCOM4)
		MCLK->APBCMASK.bit.SERCOM4_ = 1;
	if (sercom == SERCOM4)
		GCLK->PCHCTRL[20].reg = (1 << 6);
	GCLK->PCHCTRL[15].reg = (1 << 6) | 0x3;

	if (sercom == SERCOM4)
	{
		PORT->Group[2].WRCONFIG.reg = (uint32_t)((1 << 8) | (1 << 9) | PORT_WRCONFIG_PMUXEN | PORT_WRCONFIG_PMUX(0x3) | PORT_WRCONFIG_WRPMUX | PORT_WRCONFIG_WRPINCFG | PORT_WRCONFIG_HWSEL);
	}

	sercom->USART.CTRLA.bit.SWRST = 0x1;
	while (sercom->USART.SYNCBUSY.bit.SWRST != 0)
		;

	if (sercom->USART.CTRLA.bit.ENABLE != 0)
		sercom->USART.CTRLA.bit.ENABLE = 0;
	sercom->USART.CTRLA.reg = SERCOM_USART_CTRLA_DORD | SERCOM_USART_CTRLA_MODE(1) | SERCOM_USART_CTRLA_TXPO(1) | SERCOM_USART_CTRLA_RXPO(3);
	sercom->USART.BAUD.reg = (uint16_t)baud;

	sercom->USART.INTENSET.reg = 0x4;

	sercom->USART.CTRLB.reg |= 3 << 16;
	while (sercom->USART.SYNCBUSY.bit.CTRLB)
		;

	sercom->USART.CTRLA.bit.ENABLE = 1;
	while (sercom->USART.SYNCBUSY.bit.ENABLE)
		;

	NVIC_EnableIRQ(SERCOM4_IRQn);
}

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
	while (sercom->USART.INTFLAG.bit.TXC != 1)
		// Spin
		;
}

uint32_t uart_read(uint8_t *buf, const uint32_t len)
{
	if (len <= 0)
	{
		return 0;
	}

	for (uint32_t bytes_read = 0; bytes_read < len; bytes_read++)
	{
		if (!ring_buffer_read(&ringBuffer, &buf[bytes_read]))
		{
			return bytes_read;
		}
	}
	return len;
}

uint8_t uart_read_byte(void)
{
	uint8_t byte = 0;
	(void)uart_read(&byte, 1);
	return byte;
}

bool uart_data_available(void)
{
	return !ring_buffer_empty(&ringBuffer);
}