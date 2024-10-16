#ifndef INC_BL_FLASH_H
#define INC_BL_FLASH_H

#include "common_defines.h"


bool bl_flash_erase_main_app(uint16_t length);
bool bl_flash_write(const uint32_t address, const uint8_t* data, const uint32_t length);

#endif // INC_BL_FLASH_H