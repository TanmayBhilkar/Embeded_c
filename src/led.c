


// include files
#include<avr/io.h>
#include "led.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void led(uint8_t state)
{
	LED_PORT = (state << LED_PIN); //States LED pin is ON or OFF
}
void InitLED(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);//clearing the port D0
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);//clearing the port D1
    PORTD|=(1<<PD1);
}
