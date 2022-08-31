//www.elegoo.com
//2016.12.8

/*by: Julieta Rojas*/

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// we define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
 {

  // fading time between colors
  #define delayTime 10 

  // choose a value between 1 and 255 to change the color
  redValue = 255; .
  greenValue = 0;
  blueValue = 0;


  // fades out red bring green full when i=255
  for(int i = 0; i < 255; i += 1) 
  {
    redValue -= 1;
    greenValue += 1;
    
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }
  

  redValue = 0;
  greenValue = 255;
  blueValue = 0;

  // fades out green bring blue full when i=255
  for(int i = 0; i < 255; i += 1) 
  { 
    greenValue -= 1;
    blueValue += 1;
 
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }


  redValue = 0;
  greenValue = 0;
  blueValue = 255;
  
  // fades out blue bring red full when i=255
  for(int i = 0; i < 255; i += 1) 
  {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
}
