// Rotary Encoder Inputs
#define CLK 2
#define DT 3

int counter = 0;
int currentStateCLK;
int lastStateCLK;
String currentDir ="";
unsigned long lastButtonPress = 0;

void setup() {
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);

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

  delay(1);
}
