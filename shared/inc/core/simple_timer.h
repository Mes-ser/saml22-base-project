#ifndef INC_SIMPLE_TIMER_H
#define INC_SIMPLE_TIMER_H

#include "common_defines.h"

typedef struct simple_timer_t
{
    uint32_t wait_time;
    uint32_t target_time;
    bool auto_reset;
    bool has_elapsed;
} simple_timer_t;

void simple_timer_init(simple_timer_t* timer, uint32_t wait_time, bool auto_reset);
bool simple_timer_has_elapsed(simple_timer_t* timer);
void simple_timer_reset(simple_timer_t* timer);

#endif // INC_SIMPLE_TIMER_H