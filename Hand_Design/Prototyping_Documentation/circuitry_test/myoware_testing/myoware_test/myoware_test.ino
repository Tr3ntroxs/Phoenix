/*
MyoWare 2.0 All-in-one component test
*/

int onboardLED = 13; // Arduino onboard LED (pin 13) you can control
int voltageThreshold = 400; // approx. 40% of strength (MyoWare outputs from 0-1023)

void setup() {
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);

}

void loop() {
  int currentVoltage = analogRead(A0); // store the incoming voltage 
  Serial.print(currentVoltage);       // prints voltage to monitor
  if(currentVoltage > voltageThreshold){
     // trigger actions
     Serial.println("CONTRACTION!");  // prints string + new line
     digitalWrite(onboardLED, HIGH); //this sends 5V, turning on LED
  } else {
     Serial.println(""); // adds a new line
     digitalWrite(onboardLED, LOW); 
     // turn off the light if threshold is not met
  }
}
