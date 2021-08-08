/*
 * BUTTON.h
 *
 * Created: 10/09/2019 07:07:40 م
 *  Author: new
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void BUTTON_init(char port, char pin);

char BUTTON_read(char port, char pin);

#endif /* BUTTON_H_ */