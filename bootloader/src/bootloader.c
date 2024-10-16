#include "mcu_conf.h"
#include "comms.h"
#include "core/system.h"
#include "core/port.h"
#include "core/sercom.h"
#include "bl_flash.h"
#include "core/simple_timer.h"

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

#define SIZE (1029)

int main(void)
{
    mcu_init();
    sercom_uart_init(SERCOM4, BAUD);
    comms_setup(SERCOM4);

    uint16_t led = PIN('C', 27); // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    uint32_t timer = 0, period = 100;

    // uint8_t data[SIZE] = {0};

    // for (uint32_t i = 0; i < SIZE; i++)
    // {
    //     data[i] = i & 0xFF;
    // }

    uart_write_buf(SERCOM4, "Welcome in bootloader.\n", 23);

    // if (bl_flash_erase_main_app(SIZE))
    // {
    //     uart_write_buf(SERCOM4, "Main App space erased.\n", 23);
    // }
    // else
    // {
    //     uart_write_buf(SERCOM4, "Error while erasing Main App space.\n", 36);
    //     __asm__("BKPT #0");
    // };

    // if (bl_flash_write(0x8000U, data, SIZE))
    // {
    //     uart_write_buf(SERCOM4, "Data written.\n", 14);
    // }
    // else
    // {
    //     uart_write_buf(SERCOM4, "Write error.\n", 13);
    // }

    simple_timer_t timer0;
    simple_timer_init(&timer0, 1000, false);
    simple_timer_t timer1;
    simple_timer_init(&timer1, 5000, true);
    simple_timer_t timer3;
    simple_timer_init(&timer3, 60 * 1000, false);

    for (;;)
    {
        if (timer_expired(&timer, period, get_system_ticks()))
        {
            port_output_toggle(led);
        }

        if (simple_timer_has_elapsed(&timer0))
        {
            uart_write_buf(SERCOM4, "Timer0 elasped\n", 15);
        }
        if (simple_timer_has_elapsed(&timer1))
        {
            uart_write_buf(SERCOM4, "Timer1 elasped\n", 15);
            simple_timer_reset(&timer0);
        }
        if(simple_timer_has_elapsed(&timer3))
        {
            uart_write_buf(SERCOM4, "Timer3 elasped\n", 15);
            break;
        }
        // comms_update();
        // if(comms_packets_available())
        // {
        //     comms_packet_t test;
        //     comms_read(&test);
        //     if(test.data[PACKET_DATA_LENGTH - 1] == 0xEE)
        //     {
        //         break;
        //     }
        // }
    };
    uart_write_buf(SERCOM4, "Jumping to App.\n", 16);
    jump_to_main();

    // Never returns;
    return 0;
}