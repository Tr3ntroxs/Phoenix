/*
EMG sensor set up with RGB LED
*/

int emg_pin = A0;
int red = 9;
int green = 10;
int blue = 11;
int emg_value = 0;

void setup() {
  pinMode(emg_pin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  emg_value = analogRead(emg_pin);
  int v = map(emg_value, 0, 1023, 0, 255);
  RGB_color(v, v, v);
  delay(1000);
}

void RGB_color(int red, int green, int blue)
 {
  analogWrite(9, red);
  analogWrite(10, green);
  analogWrite(11, blue);
}