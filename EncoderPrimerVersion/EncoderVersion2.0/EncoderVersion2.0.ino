#define ChA 3
#define ChB 4
int contador = 0; 
int PrimerEstadoA;
int UltimoEstadoA;  

void setup() {
  // put your setup code here, to run once:
pinMode(ChA, INPUT);
pinMode(ChB, INPUT);

Serial.begin(9600);

UltimoEstadoA = digitalRead(ChA);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(ChA) == HIGH){
  contador++;
}
if(digitalRead(ChB)== LOW){
  contador--;
}
Serial.print("Posicion: ");
Serial.println(contador);



}
