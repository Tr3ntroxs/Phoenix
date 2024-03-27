#include <Servo.h>

Servo servo;
int servo_pin = 5;
int led_pin = 11;
int led_value = 0;

void setup() {
  pinMode(servo_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  servo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led_pin, random(0,2));
  led_value = digitalRead(led_pin);
  if (led_value == 0) {
    servo.write(180);
  }
  else if (led_value == 1) {
    servo.write(0);
  }
  delay(1000);
}
