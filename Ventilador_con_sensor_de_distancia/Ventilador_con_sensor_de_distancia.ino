#include "SR04.h"
#include "pitches.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
#define ENABLE 5
#define DIRA 3
#define DIRB 4
int ledPinRojo = 2;
int melody[] = {
  NOTE_C5 /*DO*/, NOTE_D5 /*RE*/ , NOTE_E5 /*MI*/ , NOTE_F5 /*FA*/, NOTE_G5 /*SOL*/, NOTE_A5 /*LA*/, NOTE_B5 /*SI*/, NOTE_C6 /*DO*/};
  
int duration = 500;  // 500 miliseconds

void setup() {
   Serial.begin(9600);
   delay(1000);
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
  pinMode(ledPinRojo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   delay(1000);
   if (a<=75){
    digitalWrite(ENABLE,HIGH);
     digitalWrite(DIRA,HIGH); //one way
    digitalWrite(DIRB,LOW);
    digitalWrite(ledPinRojo, HIGH);
     for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
   
  // restart after two seconds 
  delay(2000);
   }
   if (a>75){
    digitalWrite(ENABLE, LOW);
     digitalWrite(DIRA,LOW); //one way
    digitalWrite(DIRB,LOW);
    digitalWrite(ledPinRojo, LOW);
   }
}
