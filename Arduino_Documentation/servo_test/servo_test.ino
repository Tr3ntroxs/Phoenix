/*
  Simple test for any single servo, more as a check-up for the servo itself or any
  single-servo designs/tests as seen in the documentation (fingers, stress test, etc.)
*/
#include <servo.h>

int pin = 3;
Servo s;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  s.attach(pin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  s.write(180);
  delay(1000);
  s.write(-180);
  delay(1000);
}
