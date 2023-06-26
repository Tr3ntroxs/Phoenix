#include <Servo.h>

Servo servo;
int servo_pin = 10;
int button_pin = A0;
int led_pin = 9;

void setup() {
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  servo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  int button_state = digitalRead(button_pin);

  if (button_state == LOW) {
    servo.write(180);
    digitalWrite(led_pin, HIGH);  // Turn on the LED
  } else {
    servo.write(90);
    digitalWrite(led_pin, LOW);   // Turn off the LED
  }
  delay(1000);
}
