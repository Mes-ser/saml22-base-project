BOOTLOADER_SIZE = 0x8000
BOOTLOADER_FILE = "./build/bootloader.bin"

with open(BOOTLOADER_FILE, "rb") as f:
    raw_file = f.read()

bytesToPad = BOOTLOADER_SIZE - len(raw_file)
padding = bytes([0xFF for _ in range(bytesToPad)])

with open(BOOTLOADER_FILE, "wb") as f:
    f.write(raw_file + padding)
