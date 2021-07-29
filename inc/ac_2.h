#ifndef AC_2_H_INCLUDED
#define AC_2_H_INCLUDED


#include <avr/io.h>
#include "ac_2.h"


#define LED_ON 	(0x01)
#define LED_OFF	(0x00)

#define LED_PORT (PORTB)
#define LED_PIN  (PORTB0)
#define SWITCH_1_ON !(PIND&(1<<PD0))
#define SWITCH_2_ON !(PIND&(1<<PD1))

void led(uint8_t state);
void InitLED(void);

#endif
