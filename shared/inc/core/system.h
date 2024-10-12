#ifndef INC_SYSTEM_H
#define INC_SYSTEM_H

#include <stdbool.h>

static volatile uint32_t s_ticks; // volatile is important!!

uint32_t get_system_ticks(void);

void SysTick_Handler(void);

bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now);

void mcu_init(void);

#endif // INC_SYSTEM_H