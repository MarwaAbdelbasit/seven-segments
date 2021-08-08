/*
 * seven_segment_bcd.c
 *
 * Created: 17/09/2019 07:22:01 م
 *  Author: new
 */ 

#include "DIO.h"
#include "macros.h"

void seven_seg_bcd_init(char port)
{
	DIO_set_direction(port, 0, 1);
	DIO_set_direction(port, 1, 1);
	DIO_set_direction(port, 2, 1);
	DIO_set_direction(port, 3, 1);
}

void seven_seg_bcd_write(char port, char val)
{
	write_low_nibble(port, val);
}