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
    
Servo myServo1;
int servoPin1 = 3;
int servoMin1 = 0;      // Minimum angle for servo1
int servoMax1 = 180;     // Maximum angle for servo1

Servo myServo2;
int servoPin2 = 10;
int servoMin2 = 0;      // Minimum angle for servo2
int servoMax2 = 180;    // Maximum angle for servo2

Servo myServo3;
int servoPin3 = 9;
int servoMin3 = 0;     // Minimum angle for servo3
int servoMax3 = 180;    // Maximum angle for servo3

Servo myServo4;
int servoPin4 = 6;
int servoMin4 = 0;     // Minimum angle for servo4
int servoMax4 = 180;    // Maximum angle for servo4

Servo myServo5;
int servoPin5 = 5;
int servoMin5 = 0;     // Minimum angle for servo5
int servoMax5 = 180;    // Maximum angle for servo5

int onboardLED = 13;            // Arduino onboard LED (pin 13) you can control
int voltageThreshold = 400;     // Threshold voltage for servo activation

bool servo1Activated = false;    // Track if servo1 is activated
bool servo2Activated = false;    // Track if servo2 is activated
bool servo3Activated = false;    // Track if servo3 is activated
bool servo4Activated = false;    // Track if servo4 is activated
bool servo5Activated = false;    // Track if servo5 is activated

void setup() {
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
  myServo3.attach(servoPin3);
  myServo4.attach(servoPin4);
  myServo5.attach(servoPin5);
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);
}

void loop() {
  int currentVoltage = analogRead(A0);  // Read the voltage from the sensor

  // Control servo1 based on the voltage reading
  if (currentVoltage > voltageThreshold && !servo1Activated) {
    Serial.println("Servo 1: CONTRACTION!");
    digitalWrite(onboardLED, HIGH);
    int servoAngle1 = map(currentVoltage, voltageThreshold, 1023, servoMin1, servoMax1);
    myServo1.write(servoAngle1);
    servo1Activated = true;
  } else if (currentVoltage <= voltageThreshold && servo1Activated) {
    Serial.println("Servo 1: RELEASE!");
    digitalWrite(onboardLED, LOW);
    myServo1.write(servoMin1);
    servo1Activated = false;
  }

  // Control servo2 based on the voltage reading
  if (currentVoltage > voltageThreshold && !servo2Activated) {
    Serial.println("Servo 2: CONTRACTION!");
    digitalWrite(onboardLED, HIGH);
    int servoAngle2 = map(currentVoltage, voltageThreshold, 1023, servoMin2, servoMax2);
    myServo2.write(servoAngle2);
    servo2Activated = true;
  } else if (currentVoltage <= voltageThreshold && servo2Activated) {
    Serial.println("Servo 2: RELEASE!");
    digitalWrite(onboardLED, LOW);
    myServo2.write(servoMin2);
    servo2Activated = false;
  }

  // Control servo3 based on the voltage reading
   if (currentVoltage > voltageThreshold && !servo3Activated) {
    Serial.println("Servo 3: CONTRACTION!");
    digitalWrite(onboardLED, HIGH);
    int servoAngle3 = map(currentVoltage, voltageThreshold, 1023, servoMin3, servoMax3);
    myServo3.write(servoAngle3);
    servo3Activated = true;
  } else if (currentVoltage <= voltageThreshold && servo3Activated) {
    Serial.println("Servo 3: RELEASE!");
    digitalWrite(onboardLED, LOW);
    myServo3.write(servoMin3);
    servo3Activated = false;
  }

  // Control servo4 based on the voltage reading
  if (currentVoltage > voltageThreshold && !servo4Activated) {
    Serial.println("Servo 4: CONTRACTION!");
    digitalWrite(onboardLED, HIGH);
    int servoAngle4 = map(currentVoltage, voltageThreshold, 1023, servoMin4, servoMax4);
    myServo4.write(servoAngle4);
    servo4Activated = true;
  } else if (currentVoltage <= voltageThreshold && servo4Activated) {
    Serial.println("Servo 4: RELEASE!");
    digitalWrite(onboardLED, LOW);
    myServo4.write(servoMin4);
    servo4Activated = false;
  }

  // Control servo5 based on the voltage reading
  if (currentVoltage > voltageThreshold && !servo5Activated) {
    Serial.println("Servo 5: CONTRACTION!");
    digitalWrite(onboardLED, HIGH);
    int servoAngle5 = map(currentVoltage, voltageThreshold, 1023, servoMin5, servoMax5);
    myServo5.write(servoAngle5);
    servo5Activated = true;
  } else if (currentVoltage <= voltageThreshold && servo5Activated) {
    Serial.println("Servo 5: RELEASE!");
    digitalWrite(onboardLED, LOW);
    myServo5.write(servoMin5);
    servo5Activated = false;
  }

  delay(10); // Optional delay for smoother servo movement
}