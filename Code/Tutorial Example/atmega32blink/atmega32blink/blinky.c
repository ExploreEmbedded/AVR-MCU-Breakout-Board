/*
 * atmega32blink.c
 *
 * Created: 30-03-2016 16:58:49
 *  Author: Nitish
 */ 


#include <avr/io.h>
#include <util/delay.h>

#define LED 0
int main()
{
	DDRB |= (1<<LED);           // Configure PORTB0 as output

	while(1)
	{
		PORTB |= (1<<LED);        // Turn ON all the LED connected to PORTB0
		_delay_ms(1000);      // Wait for some time
		PORTB &= ~(1<<LED);        // Turn OFF all the LED connected to PORTB0
	   _delay_ms(1000);      // Wait for some time
	}
	return 0;
}