MCU = __SAML22N18A__
PLATFORM = cortex-m0plus

APP_DIR = app/
BUILD_DIR = build/
DEPENDS_DIR = dependencies/

CMSIS = ${DEPENDS_DIR}cmsis_core/CMSIS/
CMSIS_SAML22 = ${DEPENDS_DIR}cmsis_saml22/

LD_SCRIPT = ${APP_DIR}saml22n18a_flash.ld

CFLAGS  ?=  -W -Wall -Wextra -Werror -Wundef -Wshadow -Wdouble-promotion \
            -Wformat-truncation -fno-common -Wconversion \
            -g3 -Os -ffunction-sections -fdata-sections -I. \
            -I. -Iinclude -I${CMSIS}Core/Include -I${CMSIS_SAML22}saml22/include -I${CMSIS_SAML22}/saml22/source -I${APP_DIR}inc \
            -mcpu=${PLATFORM} -mthumb -D${MCU} $(EXTRA_CFLAGS)
            
LDFLAGS ?= -T${LD_SCRIPT} -nostartfiles -nostdlib --specs=nano.specs -lc -lgcc -Wl,--gc-sections -Wl,-Map=${BUILD_DIR}$@.map
SOURCES = ${APP_DIR}src/main.c ${APP_DIR}src/sysinit.c
SOURCES += ${CMSIS_SAML22}saml22/source/gcc/startup_saml22.c
SOURCES += ${CMSIS_SAML22}utils/syscalls/syscalls.c

build: firmware.elf

firmware.elf: cmsis_core ${LD_SCRIPT} Makefile $(SOURCES)
	arm-none-eabi-gcc $(SOURCES) $(CFLAGS) $(LDFLAGS) -o ${BUILD_DIR}$@

firmware.bin: firmware.elf
	arm-none-eabi-objcopy -O binary $< ${BUILD_DIR}$@

clean:
	rm -rf ${BUILD_DIR}firmware.*

cmsis_core: 
    git clone --depth 1 -b v6.1.0 https://github.com/ARM-software/CMSIS_6 ${DEPENDS_DIR}$@