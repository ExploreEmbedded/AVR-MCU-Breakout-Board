/*
 * Switch_Led_avr.c
 *
 * Created: 04-04-2016 15:51:57
 *  Author: Nitish
 */ 




#include <avr/io.h>

#define LED 0
#define SWITCH 0

int main(void)
{
	DDRB |= (1<<LED);           // Configure PORTB0 as output to connect Led
	DDRC &= ~(1<<SWITCH);           // Configure PORTC0 as input to connect switch
	PORTC |= 0x01;          // Enable The PullUps of PORTC0.
	while(1)
	{
	if(!PINC)                
	PORTB &= ~(1<<LED);	
	else
	PORTB |= (1<<LED);	
		
	}
	return 0;
}