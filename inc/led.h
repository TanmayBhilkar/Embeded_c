#ifndef __LED_H_
#define __LED_H_


/**
 * Include files
 */
#include <avr/io.h>
#include "led.h"

//Macro definition

#define LED_ON 	(0x01)	/**< HIGH */
#define LED_OFF	(0x00)	/**< LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SWITCH_1_ON !(PIND&(1<<PD0)) // Switch1 ON
#define SWITCH_2_ON !(PIND&(1<<PD1)) // Switch2 ON

void led(uint8_t state);
void InitLED(void);

#endif /** __LED_H_ */
