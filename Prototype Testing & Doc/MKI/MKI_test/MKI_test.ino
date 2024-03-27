/*
Servo setup for first prototype, will control five servos
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int servo1_pin = 3;
int servo2_pin = 5;
int servo3_pin = 6;
int servo4_pin = 9;
int servo5_pin = 10;

void setup() {
  pinMode(servo1_pin, OUTPUT);
  pinMode(servo2_pin, OUTPUT);
  pinMode(servo3_pin, OUTPUT);
  pinMode(servo4_pin, OUTPUT);
  pinMode(servo5_pin, OUTPUT);
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);
  servo5.attach(servo5_pin);
  Serial.begin(9600);
}

void loop() {
  // servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(45);
  delay(300);
  // servo1.write(135);
  servo2.write(135);
  servo3.write(135);
  servo4.write(135);
  servo5.write(90);
  delay(300);
  // servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(135);
  delay(300);
  exit(0);
}

