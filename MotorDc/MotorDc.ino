
int in1 = 9;  // Pin que controla el sentido de giro Motor A
int in2 = 8;  // Pin que controla el sentido de giro Motor A

 
void setup ()
{
  pinMode(in1, OUTPUT);    // Configura  los pines como salida
  pinMode(in2, OUTPUT);
}
void loop()
{

  digitalWrite(in1, LOW);  // GIRO DERECHA
  digitalWrite(in2, HIGH);
  delay(1500);
  
  digitalWrite(in1, LOW);  // PARA
  digitalWrite(in2, LOW);
  delay(1000);
  
  digitalWrite(in1, HIGH);  // GIRO IZQUIERDA
  digitalWrite(in2, LOW);
  delay(1500);
  
  digitalWrite(in1, LOW);  // PARA
  digitalWrite(in2, LOW);
  delay(1000);

  analogWrite(ENABLE,255); //enable on
  digitalWrite(in1,HIGH); //one way
  digitalWrite(in2,LOW);
  delay(2000);
  analogWrite(ENABLE,180); //half speed
  delay(2000);
  analogWrite(ENABLE,128); //half speed
  delay(2000);
  analogWrite(ENABLE,50); //half speed
  delay(2000);
  analogWrite(ENABLE,128); //half speed
  delay(2000);
  analogWrite(ENABLE,180); //half speed
  delay(2000);
  analogWrite(ENABLE,255); //half speed
  delay(2000);
  digitalWrite(ENABLE,LOW); //all done
  delay(10000);

}
