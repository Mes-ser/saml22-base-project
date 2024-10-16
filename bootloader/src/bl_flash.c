#include "bl_flash.h"

bool bl_flash_erase_main_app(const uint16_t length)
{
    uint16_t rows = length / NVMCTRL_ROW_SIZE;
    for (uint16_t row = 0; row <= rows; row++)
    {
        NVMCTRL->ADDR.reg = ((FLASH_ADDR + BOOTLOADER_END) + (row * NVMCTRL_ROW_SIZE)) >> 1U;
        NVMCTRL->CTRLA.reg = (uint16_t)(NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_ER);
        while (NVMCTRL->INTFLAG.bit.READY != 1)
            ;
        if (NVMCTRL->INTFLAG.bit.ERROR == 1)
            return false;
    }
    return true;
}

// Is this efficient way of doing this? Don't think so, but it works.
bool bl_flash_write(const uint32_t address, const uint8_t *data, const uint32_t length)
{
    if (length <= 0)
        return false;

    uint32_t pages = length / 8;
    uint32_t words = (length % 8) / 4;
    uint32_t bytes = length % 4;

    // Writting whole pages
    for (uint32_t page = 0; page < pages; page++)
    {
        while (NVMCTRL->INTFLAG.bit.READY != 1)
            ;
        *(uint32_t *)(address + (page * sizeof(uint64_t)) + 0) = ((uint32_t *)(data))[(page * 2) + 0];
        *(uint32_t *)(address + (page * sizeof(uint64_t)) + 4) = ((uint32_t *)(data))[(page * 2) + 1];
        NVMCTRL->CTRLA.reg = (uint16_t)(NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_WP);
        if (NVMCTRL->INTFLAG.bit.ERROR == 1)
            return false;
    }

    // Writting remaining words and bytes
    if (words > 0 || bytes > 0)
    {
        if (words > 0)
        {
            *(uint32_t *)(address + (pages * sizeof(uint64_t))) = ((uint32_t *)(data))[(pages * 2)];
        }
        if (bytes > 0)
        {
            uint32_t tmpWord = 0;
            for (uint32_t byte = 0; byte < bytes; byte++)
            {
                tmpWord |= (data)[(length - bytes) + byte] << (byte * 8);
            }
            *(uint32_t *)(address + (pages * sizeof(uint64_t)) + (words * 4)) = tmpWord;
        }
        while (NVMCTRL->INTFLAG.bit.READY != 1)
            ;
        NVMCTRL->CTRLA.reg = (uint16_t)(NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_WP);
        if (NVMCTRL->INTFLAG.bit.ERROR == 1)
            return false;
    }

    return true;
}