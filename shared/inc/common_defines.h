#ifndef INC_COMMON_DEFINES_H
#define INC_COMMON_DEFINES_H

#include <saml22.h>
#include <stddef.h>
#include <stdbool.h>

#define SYS_FREQ 16000000
// #define SYS_FREQ 4000000

#define BOOTLOADER_END (0x8000)
#define APP_RESET_HANDLER (FLASH_ADDR + BOOTLOADER_END)

#endif // INC_COMMON_DEFINES_H