#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

// Pin locations: 
// GND - 5V, negative ground (parallel to it)
// VCC - GND positive ground
// Vo - Pin 13
// RS - Pin 12
// R/W - Neg Ground
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
