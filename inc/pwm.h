 #ifndef __PWM_H__
#define __PWM_H__
#include<avr/io.h>

/**
 * @brief Function definition
 *
 * @param temp_value
 */

void pwm(uint16_t temp_value);
void InitPWM(void);
#endif
