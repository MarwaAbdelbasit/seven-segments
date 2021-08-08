/*
 * seven_segment.h
 *
 * Created: 17/09/2019 05:55:35 م
 *  Author: new
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

void seven_seg_init(char port);

void seven_seg_write(char port, char number);

#endif /* SEVEN_SEGMENT_H_ */