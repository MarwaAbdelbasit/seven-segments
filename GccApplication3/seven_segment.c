/*
 * seven_segment.c
 *
 * Created: 17/09/2019 05:50:18 م
 *  Author: new
 */ 

#include "DIO.h"
#include "macros.h"

void seven_seg_init(char port)
{
	DIO_set_port_direction(port, 0xff);
}

void seven_seg_write(char port, char number)
{
	char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x47, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};
	DIO_write_port(port, arr[number]);	
}