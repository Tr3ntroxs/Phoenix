#include <Servo.h>

const int servoPin = 6;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

Servo servo;
bool servoActive = false;
bool servoInvalid = false;
bool servoOverRotating = false;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  servo.attach(servoPin);
  servo.write(90); // Initial position of the servo (adjust as needed)
}

void setLEDColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

void loop() {
  // Check for servo active state
  if (servoActive) {
    if (!servoInvalid && !servoOverRotating) {
      setLEDColor(0, 255, 0); // Green (Servo active, pending response)
    } else if (!servoInvalid && servoOverRotating) {
      for (int i = 0; i < 3; i++) {
        setLEDColor(0, 255, 0); // Flashing Green (Servo active, in rotation)
        delay(250);
        setLEDColor(0, 0, 0);
        delay(250);
      }
    } else if (servoInvalid && !servoOverRotating) {
      setLEDColor(255, 255, 0); // Yellow (Servo active, invalid position)
    } else {
      for (int i = 0; i < 3; i++) {
        setLEDColor(255, 255, 0); // Flashing Yellow (Servo active, over-rotating)
        delay(250);
        setLEDColor(0, 0, 0);
        delay(250);
      }
    }
  } else {
    setLEDColor(255, 0, 0); // Red (Servo inactive)
  }
  // Add any other code related to servo control or input handling here
}
