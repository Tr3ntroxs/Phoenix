#include <Servo.h>

Servo servo;
int servo_pin = 10;
int emg_pin = A0;
int emg_val = 0;
int servo_val = 0;

void setup() {
  pinMode(servo_pin, INPUT);
  servo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  emg_val = analogRead(emg_pin);
  servo_val = map(emg_val, 0, 1023, 0, 179);
  servo.write(servo_val);
  delay(1000);
}