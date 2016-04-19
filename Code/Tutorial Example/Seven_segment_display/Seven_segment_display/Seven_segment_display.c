/*
 * Seven_segment_display.c
 *
 * Created: 02-04-2016 12:21:32
 *  Author: Nitish
 */ 



#include <avr/io.h>
#include <util/delay.h>

#define Segment   0x01


int main() {
	char seg_code[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
	int cnt;

	/* Configure the ports as output */
	DDRB = 0xff; // Data lines
	DDRD = 0xff; // Control signal PORTD0-PORTD3

	while (1)
	{
		
			for (cnt = 0x00; cnt < 0x0f; cnt++)
			{
				
				PORTD = Segment;
				PORTB = seg_code[cnt];
				_delay_ms(1000);
				
			}
	}
}