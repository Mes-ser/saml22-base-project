#include "core/system.h"

void SysTick_Handler(void) { s_ticks++; }

uint32_t get_system_ticks(void) { return s_ticks; }

inline bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now) {
    if (now + prd < *t)
        *t = 0; // Time wrapped? Reset timer
    if (*t == 0)
        *t = now + prd; // First poll? Set expiration
    if (*t > now)
        return false;                             // Not expired yet, return
    *t = (now - *t) > prd ? now + prd : *t + prd; // Next expiration time
    return true;                                  // Expired, return true
}
