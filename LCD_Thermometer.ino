 //www.elegoo.com
//2016.12.9

/*by: Julieta Rojas*/

#include <LiquidCrystal.h>

int tempPin = 0;

//                BS  E  D4 D5  D6 D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup()
{
  lcd.begin(16, 2);
}


void loop()
{
  int tempReading = analogRead(tempPin);
  
  // This is OK
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );  //  Temp Kelvin
  float tempC = tempK - 273.15;            // Convert Kelvin to Celcius
  float tempF = (tempC * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit

/*The 10k resistor goes to ground and the other to voltage.
  If the information were replaced, the programming would not be correct
  and does not take temperature well, since it changes constantly and very
  quickly, then it is not possible to know what the indicated temperature is.
  If it is removed, they would come out in degrees Fahrenheit, which is worth
  the degrees Fahrenheit */
  
  // Display Temperature in C
  lcd.setCursor(0, 0);
  lcd.print("Temp         C  ");
  
  // Display Temperature in F
  //lcd.print("Temp         F  ");
  lcd.setCursor(6, 0);
  
  // Display Temperature in C
  lcd.print(tempC);
  
  // Display Temperature in F
  //lcd.print(tempF);
  
  delay(500);
}
