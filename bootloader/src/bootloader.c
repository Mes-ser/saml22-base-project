#include "mcu_conf.h"
#include "core/system.h"
#include "core/port.h"
#include "core/sercom.h"

#define BAUD_RATE (115200)
#define BAUD (((uint64_t)65536 * (SYS_FREQ - 16 * BAUD_RATE) / SYS_FREQ) + 1)

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
    sercom_uart_init(SERCOM4, BAUD);

    uint16_t led = PIN('C', 27); // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    uint32_t timer = 0, period = 100;
    int8_t counter = 20;

    uart_write_buf(SERCOM4, "Welcome in bootloader.\n", 23);

    for (;;)
    {
        if (timer_expired(&timer, period, get_system_ticks()))
        {
            port_output_toggle(led);
            counter--;
            if (counter < 0)
                break;
        }
    };
    uart_write_buf(SERCOM4, "Jumping to App. Bye.\n", 21);
    jump_to_main();

    // Never returns;
    return 0;
}