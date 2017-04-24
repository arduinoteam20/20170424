#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330//mi
//Arduino Music Library
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char key;
int k;
char keys[ROWS][COLS]={
  {'F', 'E', 'D', 'C'},
{'B','3','6', '9'},
{'A', '2', '5', '8'}, 
{'0', '1', '4', '7'}
};

byte rowPins[ROWS]={5, 4, 3, 2};
byte colPins[COLS]={9, 8, 7, 6};
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

int tune[] = { 261,294,329,349,392,440,493,
              523,587,659,698,784,880,988,
              1046,1175};
float duration[] = 
             { 300,300,300,300,300,300,300,300,300,300,300,300,500,200,300,
               300,300,300,300,300,300,300,300,300,300,300,300,500,200,300,
               300,300,300,300,300,200,200,200,300,300,200,200,200,300,300,300,300,
               300,300,300,300,300,300,300,300,300,300,300,300,500,200,300};
//Arduino Music
void setup() {
pinMode(10, OUTPUT);

}
void loop() {
  key = keypad.getKey();
  if (key!= NO_KEY) { 
  
        if(key=='0')
            {
          tone(10, tune[0]);
          delay(300);
          noTone(10);
          }
         else if(key=='1')
            {
          tone(10, tune[1]);
          delay(300);
          noTone(10);
          }
           else if(key=='4')
            {
          tone(10, tune[2]);
          delay(300);
          noTone(10);
          }
           else if(key=='7')
            {
          tone(10, tune[3]);
          delay(300);
          noTone(10);
          }
           else if(key=='A')
            {
          tone(10, tune[4]);
          delay(300);
          noTone(10);
          }
           else if(key=='2')
            {
          tone(10, tune[5]);
          delay(300);
          noTone(10);
          }
           else if(key=='5')
            {
          tone(10, tune[6]);
          delay(300);
          noTone(10);
          }
           else if(key=='8')
            {
          tone(10, tune[7]);
          delay(300);
          noTone(10);
          }
           else if(key=='B')
            {
          tone(10, tune[8]);
          delay(300);
          noTone(10);
          }
           else if(key=='3')
            {
          tone(10, tune[9]);
          delay(300);
          noTone(10);
          }
           else if(key=='6')
            {
          tone(10, tune[10]);
          delay(300);
          noTone(10);
          }
           else if(key=='9')
            {
          tone(10, tune[11]);
          delay(300);
          noTone(10);
          }
           else if(key=='F')
            {
          tone(10, tune[12]);
          delay(300);
          noTone(10);
          }
           else if(key=='E')
            {
          tone(10, tune[13]);
          delay(300);
          noTone(10);
          }
           else if(key=='D')
            {
          tone(10, tune[14]);
          delay(300);
          noTone(10);
          }
           else if(key=='C')
            {
          tone(10, tune[15]);
          delay(300);
          noTone(10);
          }
  }

}
//if(key!=NO_KEY)
//  {
//   if(key>='0' && key <='0')
//    {
//      tone(A0,tune[key-48]);
//      delay(100);
//      noTone(A0);
//   }
//    if(key>='A' && key <='F')
//    {
//      tone(A0,tune[key-65+10]);
//      delay(100);
//      noTone(A0);
//    }
//  }

