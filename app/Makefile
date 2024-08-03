CFLAGS  ?=  -W -Wall -Wextra -Werror -Wundef -Wshadow -Wdouble-promotion \
            -Wformat-truncation -fno-common -Wconversion \
            -g3 -Os -ffunction-sections -fdata-sections -I. \
            -I. -Iinclude -Icmsis_core/CMSIS/Core/Include -Icmsis_saml22/saml22/include -Icmsis_saml22/saml22/source \
            -mcpu=cortex-m0plus -mthumb -D__SAML22N18A__ $(EXTRA_CFLAGS) \
            
LDFLAGS ?= -Tsaml22n18a_flash.ld -nostartfiles -nostdlib --specs=nano.specs -lc -lgcc -Wl,--gc-sections -Wl,-Map=$@.map
SOURCES = src/main.c
SOURCES += cmsis_saml22/saml22/source/gcc/startup_saml22.c
SOURCES += cmsis_saml22/utils/syscalls/syscalls.c

build: firmware.elf

firmware.elf: cmsis_core saml22n18a_flash.ld Makefile $(SOURCES)
	arm-none-eabi-gcc $(SOURCES) $(CFLAGS) $(LDFLAGS) -o $@

clean:
	rm -rf firmware.*

cmsis_core: 
    git clone --depth 1 -b v6.1.0 https://github.com/ARM-software/CMSIS_6 $@