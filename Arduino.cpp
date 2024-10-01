#include "Arduino.h"

#include <circle/actled.h>
#include <circle/timer.h>
#include <circle/gpiopin.h>

CActLED LED_builtin;


CGPIOPin GPIO0(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO1(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO2(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO3(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO4(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO5(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO6(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO7(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO8(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO9(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO10(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO11(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO12(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO13(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO14(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO15(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO16(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO17(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO18(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO19(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO20(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO21(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO22(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO23(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO24(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO25(GPIOPinUnknown,GPIOModeOutput);
CGPIOPin GPIO26(GPIOPinUnknown,GPIOModeOutput);


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
