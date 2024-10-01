#include "Arduino.h"

#include <circle/actled.h>
#include <circle/timer.h>
#include <circle/gpiopin.h>

CActLED LED_builtin;

unsigned int physical_pins[27] = {27,28,3,5,7,29,31,26,24,21,19,23,32,33,8,10,36,11,12,35,38,40,15,16,18,22,37};

CGPIOPin GPIO0(physical_pins[0],GPIOModeOutput);
CGPIOPin GPIO1(physical_pins[1],GPIOModeOutput);
CGPIOPin GPIO2(physical_pins[2],GPIOModeOutput);
CGPIOPin GPIO3(physical_pins[3],GPIOModeOutput);
CGPIOPin GPIO4(physical_pins[4],GPIOModeOutput);
CGPIOPin GPIO5(physical_pins[5],GPIOModeOutput);
CGPIOPin GPIO6(physical_pins[6],GPIOModeOutput);
CGPIOPin GPIO7(physical_pins[7],GPIOModeOutput);
CGPIOPin GPIO8(physical_pins[8],GPIOModeOutput);
CGPIOPin GPIO9(physical_pins[9],GPIOModeOutput);
CGPIOPin GPIO10(physical_pins[10],GPIOModeOutput);
CGPIOPin GPIO11(physical_pins[11],GPIOModeOutput);
CGPIOPin GPIO12(physical_pins[12],GPIOModeOutput);
CGPIOPin GPIO13(physical_pins[13],GPIOModeOutput);
CGPIOPin GPIO14(physical_pins[14],GPIOModeOutput);
CGPIOPin GPIO15(physical_pins[15],GPIOModeOutput);
CGPIOPin GPIO16(physical_pins[16],GPIOModeOutput);
CGPIOPin GPIO17(physical_pins[17],GPIOModeOutput);
CGPIOPin GPIO18(physical_pins[18],GPIOModeOutput);
CGPIOPin GPIO19(physical_pins[19],GPIOModeOutput);
CGPIOPin GPIO20(physical_pins[20],GPIOModeOutput);
CGPIOPin GPIO21(physical_pins[21],GPIOModeOutput);
CGPIOPin GPIO22(physical_pins[22],GPIOModeOutput);
CGPIOPin GPIO23(physical_pins[23],GPIOModeOutput);
CGPIOPin GPIO24(physical_pins[24],GPIOModeOutput);
CGPIOPin GPIO25(physical_pins[25],GPIOModeOutput);
CGPIOPin GPIO26(physical_pins[26],GPIOModeOutput);


CGPIOPin pins[27] = {GPIO0,GPIO1,GPIO2,GPIO3,GPIO4,GPIO5,GPIO6,GPIO7,GPIO8,GPIO9,GPIO10,GPIO11,GPIO12,GPIO13,GPIO14,GPIO15,GPIO16,GPIO17,GPIO18,GPIO19,GPIO20,GPIO21,GPIO22,GPIO23,GPIO24,GPIO25,GPIO26};

//TODO: implementare?
void pinMode(uint8_t pin, MODES mode) {
		pins[pin].SetMode((TGPIOMode) mode);
}

void digitalWrite(uint8_t pin, uint8_t val) {

    if (val==0) {
        LED_builtin.Off();
    } else if (val==1) {
        LED_builtin.On();
    }
}


void delay(unsigned long ms) {
    CTimer::SimpleMsDelay(ms);
}
