int CW =5;
int CCW=6;
float CWValue=0;
float CCWValue=0;

void setup() {
  // put your setup code here, to run once:
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(8, INPUT);
    analogWrite(CW,200);  //drive the motor in one direction
    analogWrite(CW,0);
    delay (500);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    for(int i=0; i<10; i++){
      digitalWrite(CW, HIGH);
      digitalWrite(CCW, LOW);
      delay(500);
      digitalWrite(CW, LOW);
      digitalWrite(CCW, HIGH);
      delay(500);
      
      
      }

}
