//www.elegoo.com
//2016.12.08

/*by: Julieta Rojas*/

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, 
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, 
  NOTE_G4};

int duration = 500;  // 500 miliseconds
 
void setup() {
/* We have to define the name of the frequencies and of each of the notes.
An integer variable is declared that is 500 milliseconds, voice setup 
function of configuration. Always place a loop with for loop, we declare 
an entire function thisnote and that variable goes one by one, 1,2,3,4,5,6,7.
Within the cycle there is a reserved word that, on pin 8, calls the melody 
array and if the variable is zero, the zero note will be played.
Between each frequency it has 1000 milliseconds, when the 7 notes finish 
we wait 2000 milliseconds, and we can change the snote and it does the same
for the other frequencies that are different.*/

}
 
void loop() {  
  
  for (int thisNote = 1; thisNote < 11; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(300);
  }
   
  // restart after two seconds 
  delay(2000);
  
}
