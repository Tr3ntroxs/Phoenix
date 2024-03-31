#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

// Pin locations: 
// GND - 5V, negative ground (parallel to it)
// VCC - GND positive ground (parallel to it)
// Vo - Pin 13
// RS - Pin 12
// R/W - Neg Ground
// Enable - 11
// D4 - 7
// D5 - 6
// D6 - 5
// D7 - 4
// A - Pos Ground
// K - Neg Ground
void setup()
{
  lcd.begin(16, 2);
  analogWrite(13, Contrast);
  //Serial.begin(9600);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("HELLO WORLD!");
  delay(3000);
  lcd.setCursor(0, 1);
  lcd.print("FINALLY!");
}