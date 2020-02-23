#include <LiquidCrystal.h>
const int rs = 5, en = 7, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
            }

void loop() {
  // set the cursor to column 0, line 1
  lcd.setCursor(0, 1);
           }
