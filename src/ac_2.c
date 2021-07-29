#include<avr/io.h>
#include "ac_2.h"

void led(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);
}
