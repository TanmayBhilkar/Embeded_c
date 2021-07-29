#ifndef AC_4_H_INCLUDED
#define AC_4_H_INCLUDED

#include<avr/io.h>



void InitUART(uint16_t ubrr);


char UARTread();

void UARTwrite(char data);

#endif //
