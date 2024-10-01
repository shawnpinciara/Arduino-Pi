
#ifndef _Arduino_h
#define _Arduino_h

#include <stdint.h>


enum MODES {
	NONE,
	INPUT,
	OUTPUT,
	INPUT_PULLUP,
	INPUT_PULLDOWN,
	AF0,
	AF1,
	AF2,
	AF3,
	AF4,
	AF5
};

//enum MODES modes[11] = {NONE,INPUT,OUTPUT,INPUT_PULLUP,INPUT_PULLDOWN,AF0,AF1,AF2,AF3,AF4,AF5};

void digitalWrite(uint8_t pin, uint8_t val);
void delay(unsigned long ms);
void pinMode(uint8_t pin, MODES mode);

#endif
