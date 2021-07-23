/**
 * @file adc.h
 * @author Tanmay Bhilkar
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-07-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __ADC_H__
#define __ADC_H__

/**
 * @brief Reading the analog input and returning a digital 8bit value
 *
 * @param ch
 * @return uint16_t
 */

uint16_t adc(uint8_t ch);
void InitADC();
#endif
