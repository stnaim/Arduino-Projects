
int a=10;
int b=13;
int c=12;
int d=8;
int e=7;
int f=9;
int g=11;
int indicador;
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output
void setup() {
  // put your setup code here, to run once:
 pinMode(a, OUTPUT);  
 pinMode(b, OUTPUT); 
 pinMode(c, OUTPUT); 
 pinMode(d, OUTPUT); 
 pinMode(e, OUTPUT); 
 pinMode(f, OUTPUT); 
 pinMode(g, OUTPUT);
 pinMode(5,INPUT);
 pinMode(6,INPUT);
Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int up= digitalRead(5); //Aumento
  int down = digitalRead(6); //Disminuyo
  int RPMS  = analogRead(2);
  int Speed = analogRead(X_pin);
  
  if(up==1 & Speed > 620){
    numero(1);
  }
  if(up==1 & Speed > 740){
    numero(2);
  }
  if(up==1 & Speed > 800){
    numero(3);
  }
  if(up==1 & Speed > 900){
    numero(4);
  }
  if(down==1){
    numero(3);
  }
  if(down==1){
    numero(2);
  }
  if(down==1){
    numero(1);
  }
  if(down==1){
    numero(0);
  }
  /////////////////////////////////////////////


  Serial.print("RPMS: ");
  Serial.print(RPMS);
  Serial.print("\n");
  Serial.print(up);
  Serial.print("\n");
  Serial.print(down);
  Serial.print("\n"); 
  Serial.print("Velocidad: ");
  Serial.print(Speed);
  Serial.print("\n");
  delay(500);
  
}

void numero(int x){
   switch(x){
     case 1: uno(); break;
     case 2: dos(); break;
     case 3: tres(); break;
     case 4: cuatro(); break;
     case 5: cinco(); break;
     case 6: seis(); break;
     case 7: siete(); break;
     case 8: ocho(); break;
     case 9: nueve(); break;
     default: cero(); break;
   } 
}

void cero(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);         
}
void uno(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);         
}
void dos(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);         
}
void tres(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);         
}
void cuatro(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void cinco(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void seis(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void siete(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);         
}
void ocho(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void nueve(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void aa(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void bb(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void cc(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);         
}
void dd(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);         
}
void ee(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);         
}
void ff(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);       
}
