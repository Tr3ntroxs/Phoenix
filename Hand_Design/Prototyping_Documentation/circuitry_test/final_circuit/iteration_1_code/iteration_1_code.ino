#include <Servo.h>

/*
  This first iteration of the hand features 5 180-degree servos, one RGB LED that will have state-read
  functions, and the MyoWare 2.0 sensor functioning (RECT output mode).

  Certain blocks of code will be activated to complete gestures/motions. 
*/

// Pins & Servo object declarations
Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;

int servoPin1 = 3;
int servoPin2 = 5;
int servoPin3 = 6;
int servoPin4 = 9;
int servoPin5 = 10;

// RGB led pins (blue not needed)
int redPin = ;
int greenPin = ;

// Other values
int sensorThreshold = 400;     // Threshold voltage for servo activation
bool servo1Activated = false;

void setup() {
  pinMode(servoPin1, OUTPUT);
  pinMode(servoPin2, OUTPUT);
  pinMode(servoPin3, OUTPUT);
  pinMode(servoPin4, OUTPUT);
  pinMode(servoPin5, OUTPUT);
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
  myServo3.attach(servoPin3);
  myServo4.attach(servoPin4);
  myServo5.attach(servoPin5);
  Serial.begin(9600);
}

void rotate_servo(Servo servo, int angle, int sensorInput) {
  if (sensorInput > sensorThreshold){
    int angle = map(sensorInput, sensorThreshold, 1023, 0, 180);
    servo.write(angle);
  } else if (currentVoltage <= voltageThreshold && servo1Activated) {
    servo.write(0);
    servo1Activated = false;
  }
}

void setLEDColor(bool servoActive, bool servoOverRotating){
  if (servoActive) {
    if (!servoInvalid && !servoOverRotating) {
      setLEDColor(0, 255); // Green (Servo active, pending response)
    } else if (!servoInvalid && servoOverRotating) {
      for (int i = 0; i < 3; i++) {
        setLEDColor(0, 255); // Flashing Green (Servo active, in rotation)
        delay(250);
        setLEDColor(0, 0);
        delay(250);
      }
    } else if (servoInvalid && !servoOverRotating) {
      setLEDColor(255, 255, 0); // Yellow (Servo active, invalid position)
    } else {
      for (int i = 0; i < 3; i++) {
        setLEDColor(255, 255); // Flashing Yellow (Servo active, over-rotating)
        delay(250);
        setLEDColor(0, 0);
        delay(250);
      }
    }
  } else {
    setLEDColor(255, 0); // Red (Servo inactive)
    exit(0); // Exits and throws error on-screen
  }
  delay(500);
}

// Helper function for main 'setLED' function
void setLEDColor(int redValue, int greenValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
}

void loop() {
  int currentInput = analogRead(A0);  // Read the voltage from the sensor

  // Control servo1 based on the voltage reading
  rotate_servo(myServo1, servoAngle1, currentInput);
  rotate_servo(myServo2, servoAngle2, currentInput);
  rotate_servo(myServo3, servoAngle3, currentInput);
  rotate_servo(myServo4, servoAngle4, currentInput);
  rotate_servo(myServo5, servoAngle5, currentInput);
  setLEDColor();

  delay(1000); // Optional delay for smoother servo movement
  exit(0); // Functions only on button-press (keeps things smooth for a test; comment out for continuous)
}