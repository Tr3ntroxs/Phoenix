#include <Servo.h>

int emg_pin = A0;
int emg_value = 0;
Servo servo;

void setup() {
  pinMode(emg_pin, INPUT);
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  emg_value = analogRead(emg_pin);
  int angle = map(emg_value, 0, 1023, 0, 180); //can write 0 to 1023 but only write to 0 to 180, scaling up values.
  servo.write(angle);
  delay(1000);
}
