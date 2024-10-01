#include "Arduino.h"
#include <circle/startup.h>

void setup() {

}

void loop() {
	digitalWrite(13,1);
	delay(200);
	digitalWrite(13,0);
	delay(500);
		

}


int main (void) {
        setup();
        while (1) {loop();}
        return EXIT_HALT;
}
