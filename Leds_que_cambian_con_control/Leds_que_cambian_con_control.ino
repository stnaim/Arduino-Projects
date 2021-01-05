#include "IRremote.h"
int receiver = 11;
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'
int LedRojo=3;
int LedAmarillo=4;
int LedAzul=5;
int LedVerde =6;
int LedBlanco = 9;

void translateIR() // takes action based on IR code received

// describing Remote IR codes 

{

  switch(results.value)

  {
  case 0xFFA25D: Serial.println("POWER");
  digitalWrite(LedRojo, LOW); 
  digitalWrite(LedAmarillo, LOW); 
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVerde, LOW);   
  digitalWrite(LedBlanco, LOW);  
  break;
  case 0xFFE21D: Serial.println("FUNC/STOP"); break;
  case 0xFF629D: Serial.println("VOL+"); break;
  case 0xFF22DD: Serial.println("FAST BACK");    break;
  case 0xFF02FD: Serial.println("PAUSE");    break;
  case 0xFFC23D: Serial.println("FAST FORWARD");   break;
  case 0xFFE01F: Serial.println("DOWN");    break;
  case 0xFFA857: Serial.println("VOL-");    break;
  case 0xFF906F: Serial.println("UP");    break;
  case 0xFF9867: Serial.println("EQ");    break;
  case 0xFFB04F: Serial.println("ST/REPT");    break;
  case 0xFF6897: Serial.println("0");    break;
  case 0xFF30CF: Serial.println("1");
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedAzul, LOW); 
  digitalWrite(LedBlanco, LOW);
  digitalWrite(LedAmarillo, LOW); 
  digitalWrite(LedRojo, HIGH);
  break;
  case 0xFF18E7: Serial.println("2");   
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedRojo, LOW); 
  digitalWrite(LedBlanco, LOW);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedAmarillo, HIGH);
  break;
  case 0xFF7A85: Serial.println("3");
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedRojo, LOW); 
  digitalWrite(LedBlanco, LOW);
  digitalWrite(LedAmarillo, LOW);
  digitalWrite(LedAzul, HIGH); 
  break;
  case 0xFF10EF: Serial.println("4");  
  digitalWrite(LedRojo, LOW); 
  digitalWrite(LedAmarillo, LOW); 
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedBlanco, LOW);
  digitalWrite(LedVerde, HIGH);
  break;
  case 0xFF38C7: Serial.println("5");
  digitalWrite(LedRojo, LOW); 
  digitalWrite(LedAmarillo, LOW); 
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVerde, LOW);   
  digitalWrite(LedBlanco, HIGH);
  break;
  case 0xFF5AA5: Serial.println("6");   
   digitalWrite(LedRojo, HIGH); 
  digitalWrite(LedAmarillo, HIGH); 
  digitalWrite(LedAzul, HIGH);
  digitalWrite(LedVerde, HIGH);   
  digitalWrite(LedBlanco, HIGH);
  break;
  case 0xFF42BD: Serial.println("7");    break;
  case 0xFF4AB5: Serial.println("8");    break;
  case 0xFF52AD: Serial.println("9");    break;
  case 0xFFFFFFFF: Serial.println(" REPEAT");break;  

  default: 
    Serial.println(" other button   ");

  }// End Case

  delay(500); // Do not get immediate repeat


} //END translateIR

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  Serial.println("IR Receiver Button Decode"); 
  irrecv.enableIRIn(); // Start the receiver
  pinMode(LedRojo, OUTPUT);
  pinMode(LedAmarillo, OUTPUT);
  pinMode(LedAzul, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedBlanco, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(&results)) // have we received an IR signal?

  {
    translateIR(); 
    irrecv.resume(); // receive the next value
  }  
}
