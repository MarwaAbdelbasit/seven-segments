/*
 * BUTTON.c
 *
 * Created: 10/09/2019 07:02:06 م
 *  Author: new
 */

#include "DIO.h"
#include "macros.h"

//1_Define the given pin in the given port as input pin
void BUTTON_init(char port, char pin)
{
	DIO_set_direction(port, pin, 0);
} 


//2_return 0 or 1 depend on the status of the button(pressed or not) and the type of connection(pull up or pull down)
char BUTTON_read(char port, char pin)
{
	char x;
	x = DIO_read(port, pin);
	return x;
}
