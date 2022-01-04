# Linux Drivers and Modules

Building blocks for simple Linux Kernel Modules and Linux Drivers.

## Preparation

Using a Raspberry Pi 4, I developed and tested my modules and drivers. To compile them, you need to install the Kernel headers on your Pi. On Raspbian, do so using the following command:

```cmd
            sudo apt-get install raspberrypi-kernel-headers
```

You also need the build utils (make, gcc, ...), although they come preinstalled on Raspbian.

## Content

This repository includs: 
1. Simple Kernel Module
2. Device Numbers and Device Files
3. Create device file in driver and callbacks
4. GPIO Driver
5. Text LCD Driver
6. PWM Module
7. Temperature Sensor (I2C)
8. Timer in Linux Kernel Modules
9. High Resolution Timer in Linux Kernel Modules
10. Accessing SPI with a Linux Kernel Module (BMP280 sensor again)
11. Using a GPIO Interrupt in a Linux Kernel Module
12. Using Parameters in a Linux Kernel Module
13. IOCTL in a Linux Kernel Module
14. Threads in a Linux Kernel Module
