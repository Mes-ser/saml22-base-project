ifneq ($(V),1)
Q		:= @
NULL		:= 2>/dev/null
endif

MCU = __SAML22N18A__
PLATFORM = cortex-m0plus

BINARY = app

ROOT = .

SRC_DIR = ${ROOT}/src
INC_DIR = ${ROOT}/inc

SHARED_INC_DIR = ../shared/inc
SHARED_SRC_DIR = ../shared/src

BUILD_DIR = ${ROOT}/build
DEPENDS_DIR = ../dependencies

CMSIS = ${DEPENDS_DIR}/cmsis_core/CMSIS
CMSIS_SAML22 = ${DEPENDS_DIR}/cmsis_saml22

LD_SCRIPT = ${ROOT}/saml22n18a_flash.ld

CFLAGS  ?=  -W -Wall -Wextra -Werror -Wundef -Wshadow -Wdouble-promotion \
            -Wformat-truncation -fno-common -Wconversion \
            -g3 -Os -ffunction-sections -fdata-sections -I. \
            -I. -Iinclude -I${CMSIS}/Core/Include -I${CMSIS_SAML22}/saml22/include -I${CMSIS_SAML22}/saml22/source -I${INC_DIR} -I${SHARED_INC_DIR} \
            -mcpu=${PLATFORM} -mthumb -D${MCU} $(EXTRA_CFLAGS)

LDFLAGS ?= -T${LD_SCRIPT} -nostartfiles -nostdlib --specs=nano.specs -lc -lgcc -Wl,--gc-sections -Wl,-Map=${BUILD_DIR}/$@.map
SOURCES = ${SRC_DIR}/${BINARY}.c
SOURCES += ${SRC_DIR}/mcu_conf.c
SOURCES += ${CMSIS_SAML22}/saml22/source/gcc/startup_saml22.c
SOURCES += ${CMSIS_SAML22}/utils/syscalls/syscalls.c
# SOURCES += ${SRC_DIR}/bootloader.S
SOURCES += ${SHARED_SRC_DIR}/core/system.c
SOURCES += ${SHARED_SRC_DIR}/core/sercom.c
SOURCES += ${SHARED_SRC_DIR}/core/port.c
SOURCES += ${SHARED_SRC_DIR}/core/ring_buffer.c

build: ${BINARY}.bin

app.elf: cmsis_core ${LD_SCRIPT} Makefile $(SOURCES)
	$(Q)arm-none-eabi-gcc $(SOURCES) $(CFLAGS) $(LDFLAGS) -o ${BUILD_DIR}/$@

app.bin: app.elf
	$(Q)arm-none-eabi-objcopy -O binary ${BUILD_DIR}/$< ${BUILD_DIR}/$@

%.o: %.S
	@#printf "  CC      $(*).S\n"
	$(Q)arm-none-eabi-gcc $(CFLAGS) -o $(*).o -c $(*).S

clean:
	rm -rf ${BUILD_DIR}/${BINARY}.*

cmsis_core:
    git clone --depth 1 -b v6.1.0 https://github.com/ARM-software/CMSIS_6 ${DEPENDS_DIR}/$@
