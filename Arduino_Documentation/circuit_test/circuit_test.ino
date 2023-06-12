/*
Servo setup for first prototype, will control five servos
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int servo1_pin = 5;
int servo2_pin = 6;
int servo3_pin = 9;
int servo4_pin = 10;
int servo5_pin = 11;

void setup() {
  pinMode(servo1_pin, OUTPUT);
  pinMode(servo1_pin, OUTPUT);
  pinMode(servo1_pin, OUTPUT);
  pinMode(servo1_pin, OUTPUT);
  pinMode(servo1_pin, OUTPUT);
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);
  servo5.attach(servo5_pin);
  Serial.begin(9600);
}

void loop() {
  servo1.write(90);
  
}

