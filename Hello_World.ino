//www.elegoo.com
//2016.12.9

/*by: Julieta Rojas*/

#include <LiquidCrystal.h>

// here we initialize the library with the numbers of the pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  
  lcd.begin(16, 2); // set the number of columns and rows
  
  lcd.print("Hello, World!"); // print a message 
}

void loop() {
  
  lcd.setCursor(0, 1); // set the cursor
  
  lcd.print(millis() / 1000); // print the seconds since reset
}
