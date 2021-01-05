// Rotary Encoder Inputs
#define CLK 2
#define DT 3
int in1 = 9;  // Pin que controla el sentido de giro Motor A
int in2 = 8;  // Pin que controla el sentido de giro Motor A
#define ENABLE 10

int counter = 500;
int currentStateCLK;
int lastStateCLK;
String currentDir ="";
unsigned long lastButtonPress = 0;

void setup() {
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ENABLE,OUTPUT);

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
    } else {
      // Girando en sentido del reloj
      counter ++;
      currentDir ="Sentido horario";
    }

    Serial.print("Direccion: ");
    Serial.print(currentDir);
    Serial.print(" | Contador: ");
    Serial.println(counter);
    }

  // Se guarda el ultimo estado
  lastStateCLK = currentStateCLK;


    if( counter > 505){
      digitalWrite(ENABLE, HIGH);
      analogWrite(ENABLE, 200);
      digitalWrite(in1, LOW);  // GIRO IZQUIERDA
      digitalWrite(in2, HIGH);   
    }else if(counter < 495){
      digitalWrite(ENABLE, HIGH);
      analogWrite(ENABLE, 200);
      digitalWrite(in1, HIGH);  // GIRO DERECHA
      digitalWrite(in2, LOW);
      }else if(counter <= 505 && counter >=495){
      digitalWrite(ENABLE, HIGH);
      analogWrite(ENABLE, 0);
      digitalWrite(in1, LOW);  // PARO
      digitalWrite(in2, LOW);
        }
  delay(1);
}
