#include <Servo.h>

Servo ESC;     // create servo object to control the ESC


void setup() {
  // Attach the ESC on pin 9
  ESC.attach(9,1000,2000); // (pin, min pulse width, max pulse width in microseconds) 
}

void loop() {
      delay(1000);
      // Arm the ESC
      ESC.write(1); // Between 0 and 180
      //write a while loop
      while(1){
        ESC.write(30); // Between 0 and 180
      }
}

