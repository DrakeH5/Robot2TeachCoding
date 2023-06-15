
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

//const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
int speed = 120; //rpm
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(100, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(speed);
  // initialize the serial port:
  Serial.begin(9600);
}


void go_forward(){
  myStepper.step(200);
}

/*void go_backwards(){
  myStepper.step(-200);
}*/

void loop() {
  go_forward();
  delay(500);
}
