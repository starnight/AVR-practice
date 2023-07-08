# AVR practice

Some practices for Atmel AVR MCUs (acquired by Microchip Technology in 2016).

## Prepare Development Environment

Install `avr-` cross compile toolchain:
* avr-gcc
* avr-libc

Flash tool:
* avrdude

## LED Example

This example is available on [Arduino Nano](https://store.arduino.cc/products/arduino-nano)
using MCU [Atmega328P](https://www.microchip.com/en-us/product/atmega328p).
Please modify the code & config for other platforms.

1. Get into the LED example
2. Build with: `make`
3. Connect Arduino Nano to the host, then flash: `make flash`

Clean with: `make clean`
