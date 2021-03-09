USB_VID = 0x239A
USB_PID = 0x805A
USB_PRODUCT = "Feather STM32F405 Express"
USB_MANUFACTURER = "Adafruit Industries LLC"

SPI_FLASH_FILESYSTEM = 1
EXTERNAL_FLASH_DEVICES = GD25Q16C

MCU_SERIES = F4
MCU_VARIANT = STM32F405xx
MCU_PACKAGE = LQFP64

LD_COMMON = boards/common_default.ld
LD_DEFAULT = boards/STM32F405_default.ld
# UF2 boot option
LD_BOOT = boards/STM32F405_boot.ld
UF2_OFFSET = 0x8010000
