//www.elegoo.com
//2016.12.9

/*by: Julieta Rojas*/

int lightPin = 0;
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

/* In the pinmode the output pins are marked for the next turn.
Digital writer low, the led is off.
Shiftout here marks the clock this send a signal to turn on the reader
high, the pin turns on whatever the clock pin reading marks.
The light have the variables of the leds defined,so you can program them.
The milliseconds are programmed as you want the lights to turn on.*/

int leds = 0;

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
void loop() 
{
  int reading  = analogRead(lightPin);
  int numLEDSLit = reading / 57;  //1023 / 9 / 2
  if (numLEDSLit > 8) numLEDSLit = 8;
  leds = 0;   // no LEDs lit to start
  for (int i = 0; i < numLEDSLit; i++)
  {
    leds = leds + (1 << i);  // sets the i'th bit
  }
  updateShiftRegister();
}
