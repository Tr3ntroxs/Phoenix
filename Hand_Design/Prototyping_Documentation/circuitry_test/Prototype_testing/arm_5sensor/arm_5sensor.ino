#include <Servo.h>

// sensor ports:
//     5v - red
//     ground - grey
//     Analog 0 - green

// servo ports:
    // servo 3
    // servo 10
    // servo 9
    // servo 6
    // servo 5

Servo myServo1;                  // Create a servo object
int servoPin1 = 3;               // PWM pin for servo control
Servo myServo2;                  // Create a servo object
int servoPin2 = 10;               // PWM pin for servo control
Servo myServo3;                  // Create a servo object
int servoPin3 = 9;               // PWM pin for servo control
Servo myServo4;                  // Create a servo object
int servoPin4 = 6;               // PWM pin for servo control
Servo myServo5;                  // Create a servo object
int servoPin5 = 5;               // PWM pin for servo control

int onboardLED = 13;            // Arduino onboard LED (pin 13) you can control
int voltageThreshold = 400;     // approx. 40% of strength (MyoWare outputs from 0-1023)
bool servoActivated = false;    // Track if servo is activated

void setup() {

}

void loop() {
    
}