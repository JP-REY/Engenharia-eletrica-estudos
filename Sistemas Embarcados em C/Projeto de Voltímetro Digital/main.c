//Digital Voltmetter
//Author: João Pedro Rey
//Date:11/09/2025

//================================================================================================================================================
#define F_CPU 16000000 //Clock frequency for ATmega328p
//================================================================================================================================================
#include <avr/io.h>
#include <util/delay.h>
//================================================================================================================================================
#define set_bit(reg,bit)   (reg |=  (1<<bit))
#define clear_bit(reg,bit) (reg &= ~(1<<bit))
//===================================== Main Function ============================================================================================

int main(void)
{
	set_bit(DDRB,PORTB0);
	set_bit(DDRB,PORTB1);
	clear_bit(PORTB,PORTB0);
	clear_bit(PORTB,PORTB1);
   
    while (1) 
    {
		set_bit(PORTB,PORTB0);
		clear_bit(PORTB,PORTB1);
		_delay_ms(100);
		set_bit(PORTB,PORTB1);
		clear_bit(PORTB,PORTB0);
		_delay_ms(100);		
		
    }
}

