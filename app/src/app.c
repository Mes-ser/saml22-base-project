#include "core/port.h"
#include "core/sercom.h"
#include "core/system.h"
#include "mcu_conf.h"

#define BAUD_RATE (115200)
#define BAUD (((uint64_t)65536 * (SYS_FREQ - 16 * BAUD_RATE) / SYS_FREQ) + 1)

int main(void) {
    mcu_init();
    sercom_uart_init(SERCOM4, BAUD);

    uint16_t led = PIN('C', 27); // user_led0
    port_dir(led, GPIO_DIR_OUTPUT);

    uint32_t timer = 0, period = 1000;

    uart_write_buf(SERCOM4, "Welcome in App.\n", 16);

    for (;;) {
        if (timer_expired(&timer, period, get_system_ticks())) {
            port_output_toggle(led);
        }
        if (uart_data_available()) {
            uint8_t data = uart_read_byte();
            uart_write_byte(SERCOM4, data + 1);
        }
    };
}
