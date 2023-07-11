/*
Button set up with one servo
*/
#include <Servo.h>

Servo servo;
int servo_pin = 10;
int button_pin = A0;
int button_state = 0;

void setup() {
  pinMode(button_pin, INPUT);
  servo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  button_state = digitalRead(button_pin);
  if(button_state == LOW):
    servo.write(10);
}
