 #define ChA 3
 #define ChB 4
 int contador = 0; 
 int PrimerEstadoA;
 int UltimoEstadoA;  
 
 void setup() { 
   pinMode (ChA,INPUT);
   pinMode (ChB,INPUT);
   
   Serial.begin (9600);
   // Lee el estado inicial del canal A
   UltimoEstadoA = digitalRead(ChA);   
 } 
 void loop() { 
   PrimerEstadoA = digitalRead(ChA); // Lee el estadi actual del canal A
   // Si el estado anterior y el presente son distintos en el canal A, ocurrio un pulso
     if (PrimerEstadoA != UltimoEstadoA){     

     if (digitalRead(ChB) == PrimerEstadoA) { 
       contador ++;
     } else {
       contador --;
     }
     Serial.print("Posicion: ");
     Serial.println(contador);
   } 
   UltimoEstadoA = PrimerEstadoA; // Updates the previous state of the outputA with the current state
 }
