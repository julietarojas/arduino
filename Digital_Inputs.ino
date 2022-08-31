//www.elegoo.com
//2016.12.08

/*by: Julieta Rojas*/

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

/*Occupies four byte spaces, it doesn't matter if you don't put leds because
there is no variable called like that.
Pin 5 acts as an output.
Change action, change to low, deactivate, etc. It wait for new action.
The loop - it´s a cycle function.
For- is a loop within another loop
High and low; if you don't press it, it's high and when you press it it's low
and this action is activated */

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
