#include <avr/io.h>
#include <util/delay.h>

int main()
{
    /* According to Arduino Nano's schematics,
     * the LED is connected to PB5 of ATmega328P.
     * https://store.arduino.cc/products/arduino-nano
     */
    DDRB = 0xff;         // Configure PORTB as output to connect Leds

    while(1)
    {
        PORTB = 1 << 5;  // Light on LED
        _delay_ms(1000);
        PORTB = 0;       // Light off LED
        _delay_ms(1000);
    }

    return 0;
}
