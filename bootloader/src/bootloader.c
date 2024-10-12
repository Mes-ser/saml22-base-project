#include <inttypes.h>
#include <stdbool.h>

#include "hal.h"

static volatile uint32_t s_ticks; // volatile is important!!
void SysTick_Handler(void)
{
    s_ticks++;
}

void mcu_init(void);

#define BOOTLOADER_END (0x8000)
#define APP_RESET_HANDLER (FLASH_ADDR + BOOTLOADER_END)

void jump_to_main(void)
{
    typedef void (*void_fn)(void);
    uint32_t *reset_vector_entry = (uint32_t *)(APP_RESET_HANDLER + 4u);
    uint32_t *reset_vector = (uint32_t *)(*reset_vector_entry);

    void_fn jump_fn = (void_fn)reset_vector;

    jump_fn();
}

int main(void)
{
    mcu_init();

    uint16_t led = PIN('C', 27); // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    uint32_t timer = 0, period = 100;

    int8_t counter = 20;

    for (;;)
    {
        if (timer_expired(&timer, period, s_ticks))
        {
            port_output_toggle(led);
            counter--;
            if (counter < 0)
                break;
        }
    };

    jump_to_main();

    // Never resturns;
    return 0;
}