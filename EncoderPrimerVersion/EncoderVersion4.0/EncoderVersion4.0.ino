// Rotary Encoder Inputs
#define CLK 2
#define DT 3
#define dirPin 4
#define stepPin 5


int counter = 0;
int currentStateCLK;
int lastStateCLK;
String currentDir ="";
unsigned long lastButtonPress = 0;

void setup() {
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);

  // Setup Serial Monitor
  Serial.begin(9600);

  // Lee el estado incial
  lastStateCLK = digitalRead(CLK);
}

void loop() {
  
  // Lee el estado actual
  currentStateCLK = digitalRead(CLK);
  // Si el estado actual es diferente, ocurrio un pulso
  // Reacciona con un estado para evitar un doble contador
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){

    // Girando en sentido contra las agujas del reloj
    if (digitalRead(DT) != currentStateCLK) {
      counter --;
      currentDir ="Sentido anti-horario";
     digitalWrite(dirPin, HIGH);
    for(int i=0; i<counter; i++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);  
   }
  }
    else {
      // Girando en sentido del reloj
      counter ++;
      currentDir ="Sentido horario";
        digitalWrite(dirPin, LOW);
    for(int i=0; i<counter; i++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);  
    }
   }

    Serial.print("Direccion: ");
    Serial.print(currentDir);
    Serial.print(" | Contador: ");
    Serial.println(counter);
  }


  // Se guarda el ultimo estado
  lastStateCLK = currentStateCLK;

       if (Serial.available() > 0) //if serial is aviable write what i receive in the variable targetpos
                  {
                  counter = Serial.parseInt();//rateo encoder puls/mm
                  
                  }
}
