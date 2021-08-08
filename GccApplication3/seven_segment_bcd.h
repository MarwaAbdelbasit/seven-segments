/*
 * seven_segment_bcd.h
 *
 * Created: 17/09/2019 07:28:47 م
 *  Author: new
 */ 


#ifndef SEVEN_SEGMENT_BCD_H_
#define SEVEN_SEGMENT_BCD_H_

void seven_seg_bcd_init(char port);

void seven_seg_bcd_write(char port, char val);

#endif /* SEVEN_SEGMENT_BCD_H_ */