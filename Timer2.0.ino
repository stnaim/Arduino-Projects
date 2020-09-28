int n;
int x = 100;
int a=5;
int b=7;
int c=4;
int d=11;
int e=10;
int f=3;
int g=6;
int t=4950;
void setup() {
  // put your setup code here, to run once:
 pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);//PUSH BUTTON
}

void loop() {
    while(n!=6000){
      reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
   delayMicroseconds(t);
    n++;
       int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
                  }
   n=0;    
   while(n!=6000){
     reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
  delayMicroseconds(t);
    reiniciar();
  digito(2);//HABILITAR DIGITO 2
  numero(1);//OBTENER DIGITO 2
  delayMicroseconds(t);
  n++;
     int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
    } 
     n=0;    
   while(n!=6000){
     reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
  delayMicroseconds(t);
    reiniciar();
  digito(2);//HABILITAR DIGITO 2
  numero(2);//OBTENER DIGITO 2
  delayMicroseconds(t);
  n++;
     int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
    } 
     n=0;    
   while(n!=6000){
     reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
  delayMicroseconds(t);
    reiniciar();
  digito(2);//HABILITAR DIGITO 2
  numero(3);//OBTENER DIGITO 2
  delayMicroseconds(t);
  n++;
     int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
    } 
     n=0;    
   while(n!=6000){
     reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
  delayMicroseconds(t);
    reiniciar();
  digito(2);//HABILITAR DIGITO 2
  numero(4);//OBTENER DIGITO 2
  delayMicroseconds(t);
  n++;
     int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
    } 
     n=1;
     while(n=1){  
 reiniciar();
  digito(3);//HABILITAR DIGITO 3
  numero((n/x/10)%10);//OBTENER DIGITO 3
  delayMicroseconds(t);
      reiniciar();  
  digito(4);//HABILITAR DIGITO 4
  numero(n/x % 10);  //OBTENER DIGITO 4
  delayMicroseconds(t);
    reiniciar();
  digito(2);//HABILITAR DIGITO 2
  numero(5);//OBTENER DIGITO 2
  delayMicroseconds(t);  
    int v=digitalRead(2); //LEER VALOR DEL PUSH 
  //SI SE OPRIME EL PUSH SE REINICIA CONTADOR
  if(v==1){
    reiniciar();
    n=0;
    return loop;
  }
     }
exit(0);  

}


void digito(int x){
  digitalWrite(13, HIGH); // dig 1
  digitalWrite(12, HIGH); // dig 2
  digitalWrite( 9, HIGH); // dig 3
  digitalWrite( 8, HIGH); // dig 4 
  //DE ACUERDO AL VALOR SE HABILITA DIGITO
  switch(x){
    case 1: digitalWrite(13, LOW); break;
    case 2: digitalWrite(12, LOW); break;
    case 3: digitalWrite(9, LOW); break;
    case 4: digitalWrite(8, LOW); break;    
  }
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

void reiniciar(){   
  digitalWrite( 5, LOW); // A
  digitalWrite( 7, LOW); // B
  digitalWrite( 4, LOW); // C
  digitalWrite(11, LOW); // D
  digitalWrite(10, LOW); // E
  digitalWrite( 3, LOW); // F
  digitalWrite( 6, LOW); // G 
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
