/*
 * GccApplication3.c
 *
 * Created: 17/09/2019 03:15:19 م
 *  Author: new
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "DIO.h"
#include "macros.h"
#include "seven_segment.h"
#include "BUTTON.h"
#include "seven_segment_bcd.h"




/* without using a function 
//1_write a code to display numbers from 0 to 9 with a delay 1 second on common cathode seven segment
// which connected to port D  and the display will be repeated .
int main(void)
{
	unsigned char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x47, 0x7f, 0x6f};
	unsigned char i;
	DDRD = 0xff;
    while(1)
    {
        //TODO:: Please write your application code
		for(i=0; i<=9; i++)
		{
			PORTD = arr[i];
			_delay_ms(300); 
		}
	}
}
*/


/*
/* without using a function 
//2_write a code to display numbers from 0 to F with a delay 1 second on common cathode seven segment 
//which connected to port D  and the display will be repeated
int main(void)
{
	char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x47, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};
	char i;
	DDRD = 0xff;
	while(1)
	{
		for (i=0; i<=15; i++)
		{
			PORTD = arr[i];
			_delay_ms(300);
		}
	}				
} 
*/


/*
//3_/* using a function
//1_write a code to display numbers from 0 to 9 with a delay 1 second on common cathode seven segment
// which connected to port D  and the display will be repeated .	
int main(void)
{
	seven_seg_init('D');
	char i;
	while(1)
	{
		for(i=0; i<=9; i++)
		{
			seven_seg_write('D', i);
			_delay_ms(200);
		}
	}
}
*/



//Write a code to increase the value which is written to seven segment after each press on push button and if 
//the value reaches 9  then it will be 0 in the next press (use common cathode seven segment)
int main(void)
{
	seven_seg_init('D');
	BUTTON_init('A', 0);
	char i;
	char button;
	while(1)
	{
		button = BUTTON_read('A', 0);
		if(button == 1)
		{
			i++;
		}
		if(i > 9)
		{
			i=0;
		}
		seven_seg_write('D', i);
		_delay_ms(100);
	}
}



/*
//Write a code to implement the same example 1 but by using Bcd to seven segment decoder
int main(void)
{
	seven_seg_bcd_init('D');
	char i;
	while(1)
	{
		for (i=0; i<=9; i++)
		{
			seven_seg_bcd_write('D', i);
			_delay_ms(300);
		}
	}
}
*/