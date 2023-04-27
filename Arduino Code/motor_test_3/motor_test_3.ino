/*
Potentiometer hooked up to motor for index test; limit switch will
prevent motor from overturning at a certain amount of tension in string
*/
#include <Servo.h>

Servo servo;
int servo_pin = 10;
int pot_pin = A0;
int res_pin = 7;
int pot_val = 0;
int servo_val = 0;

void setup() {
  pinMode(pot_pin, INPUT);
  pinMode(res_pin, INPUT);
  servo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  pot_val = analogRead(pot_pin);
  servo_val = map(pot_val, 0, 1023, 0, 179);
  servo.write(servo_val);
  if(digitalRead(res_pin) == LOW):
    Serial.print("TOO TIGHT");
    servo.write(res_pin*-1);
  delay(1000);
}