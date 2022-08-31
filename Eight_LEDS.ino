//www.elegoo.com
//2016.12.9 

/*by: Julieta Rojas*/

int tDelay = 100;
int latchPin = 11;      // (11) ST_CP [RCK] on 74HC595
int clockPin = 9;      // (9) SH_CP [SCK] on 74HC595
int dataPin = 12;     // (12) DS [S1] on 74HC595

byte leds = 0;

 /*we have the variables of the leds defined, in order to be able to program them;
 the milliseconds are programmed as you want the lights to turn on. 
 The shiftout, which is byte; starts from the most significant bit that is,
 the most to the left or less the most to the right.
 Each bit is written in turn to a data pin, after which a clock pin is pulsed 
 (taken high, then low) to indicate that the bit is available.
 And the bitsets as an array of bits, so some parallelism could be established*/
 
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}


void loop() 
{
  leds = 0;
  updateShiftRegister();
  delay(tDelay);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(tDelay);
  }
}
