#include "core/simple_timer.h"
#include "core/system.h"

void simple_timer_init(simple_timer_t *timer, uint32_t wait_time,
                       bool auto_reset) {
    timer->wait_time = wait_time;
    timer->auto_reset = auto_reset;
    timer->target_time = get_system_ticks() + wait_time;
    timer->has_elapsed = false;
}
bool simple_timer_has_elapsed(simple_timer_t *timer) {
    if (timer->has_elapsed)
        return false;

    uint32_t now = get_system_ticks();
    bool     has_elapsed = now >= timer->target_time;

    if (has_elapsed) {
        if (timer->auto_reset) {
            timer->target_time += timer->wait_time;
        } else {
            timer->has_elapsed = true;
        }
    }
    return has_elapsed;
}
void simple_timer_reset(simple_timer_t *timer) {
    simple_timer_init(timer, timer->wait_time, timer->auto_reset);
}
