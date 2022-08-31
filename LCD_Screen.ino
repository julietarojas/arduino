//www.elegoo.com
//2016.12.9

/*by: Julieta Rojas*/

#include <LiquidCrystal.h>

/* Here we have how it is printed on the LCD and the thousandths 
of a second that we assign. That is 2000 thousand seconds between
a thousand, so that it gives us the seconds on the screen, this 
will appear in cursor 0 of row 1 */


// initialize the library with the pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up columns and rows:
  lcd.begin(0, 16);
  // print a message
  lcd.print("coding makes me");
}

void loop() {
  // set the cursor to column 0, line 1
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("happy :)");
}
