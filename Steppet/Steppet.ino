#define dirPin 2
#define stepPin 3

void setup() {
  // put your setup code here, to run once:
pinMode(dirPin, OUTPUT);
pinMode(stepPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPin, HIGH);
  for(int i =0; i<450; i++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(5000);    
    }
      digitalWrite(dirPin, LOW);
  for(int i =0; i<450; i++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(5000);    
    }
}
