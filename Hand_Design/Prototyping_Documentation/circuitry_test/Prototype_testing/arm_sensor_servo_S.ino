#include <Servo.h>

Servo myServo;                  // Create a servo object
int servoPin = 9;               // PWM pin for servo control

int onboardLED = 13;            // Arduino onboard LED (pin 13) you can control
int voltageThreshold = 400;     // approx. 40% of strength (MyoWare outputs from 0-1023)
bool servoActivated = false;    // Track if servo is activated

void setup() {
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);
  myServo.attach(servoPin);     // Attach the servo to the specified pin
}

void loop() {
  int currentVoltage = analogRead(A0); // store the incoming voltage 
  Serial.print(currentVoltage);       // prints voltage to monitor

  if (currentVoltage > voltageThreshold && !servoActivated) {
    // trigger actions
    Serial.println("CONTRACTION!");  // prints string + new line
    digitalWrite(onboardLED, HIGH);  // this sends 5V, turning on LED
    myServo.write(90);               // Set the servo to a desired position (e.g., 90 degrees)
    servoActivated = true;           // Set the flag to indicate servo activation
  } else if (currentVoltage <= voltageThreshold && servoActivated) {
    Serial.println("");              // adds a new line
    digitalWrite(onboardLED, LOW);
    myServo.write(0);                 // Set the servo to a different position (e.g., 0 degrees)
    servoActivated = false;          // Reset the flag to indicate servo deactivation
  }
  
  delay(100);  // add a small delay to prevent rapid processing
}
