//www.elegoo.com
//2016.12.08

/*by: Julieta Rojas*/

#include "pitches.h"

#define BLUE 3
#define GREEN 5
#define RED 6

// notes in the melody:

int melody[] = {
  NOTE_D6, NOTE_E6, 0,
  NOTE_D6, NOTE_B6, NOTE_G6,NOTE_E6, NOTE_D6,0,
  NOTE_D6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_D6, 
  0, NOTE_G6, NOTE_FS6,0,NOTE_C6, NOTE_D6, 0 ,
  NOTE_C6,NOTE_A6, NOTE_FS6, NOTE_E6, NOTE_D6
  }; 

  int duration = 700;  // 700 miliseconds
 
  void setup() {
  
 /*we have the defined name and the frequencies, in each of the notes an integer 
  variable is declared that is 500 milliseconds, voice setup is the configuration 
  function and always put a loop with the for loop, an entire thisnote function 
  is declared and that variable goes one by one, 1,2,3,4,5,6,7.
  Inside the loop there is a reserved word that on pin 8 calls the melody array
  and the variable is zero and the note zero is played.
  Between each frequency it has 1000 milliseconds, when the 7 notes finish we wait 
  2000 milliseconds, and we can change the notes and it does the same for the
  frequencies that are different.*/

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  }

 
  // define variable
 int redValue;
 int greenValue; 
 int blueValue;
 int pinkValue;
 
 void loop() {  
  for (int thisNote = 1; thisNote < 25; thisNote++) {
    
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    //delay(200);
   
    // restart after two seconds 
    //delay(300);

  #define delayTime 1 // fading time between colors

  // choose a value between 1 and 255 to change the color.
  // fades out red bring green full when i=255
  redValue = 100; 
  greenValue = 0;
  blueValue = 0;

  for(int i = 0; i < 100; i += 1) 
  { 
    redValue -= 1;
    greenValue += 1;

    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  
  // fades out green bring blue full when i=255
  redValue = 0;
  greenValue = 100;
  blueValue = 0;

  for(int i = 0; i < 100; i += 1) 
  {
    pinkValue=greenValue+blueValue;
    greenValue -= 1;
    blueValue += 1;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
  

  // fades out blue bring red full when i=255
  redValue = 0;
  greenValue = 0;
  blueValue = 100;  

  for(int i = 0; i < 100; i += 1)  
  {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED,redValue);
    delay(delayTime);
  }
 }
}
