/*
 * First test of driver motor L298
 * 1/6/2017
 */
N1=6;
N2=9;
N3=10;
N4=11;
void setup() {
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  pinMode(N3, OUTPUT);
  pinMode(N4, OUTPUT);
}

void loop() {
  //inicializar los motores en paro
  digitalWrite(N1,LOW);
  digitalWrite(N2,LOW);
  digitalWrite(N3,LOW);
  digitalWrite(N4,LOW);
  delay(1000);
   //mover un motor (M1)
   digitalWrite(N1,LOW);
   digitalWrite(N2,HIGH);
   delay(1000); //por un segundo
   //Luego invertir giro
   digitalWrite(N2,LOW);
   digitalWrite(N1,HIGH);
   delay(1000);//por un segundo 
   //detener el motor
   digitalWrite(N1,LOW);
   digitalWrite(N2,LOW);
   //mover el segundo motor(M2)
   digitalWrite(N3, LOW);
   digitalWrite(N4, HIGH);
   delay(1000);//esperar un segundo
   //invertir el giro
   digitalWrite(N4, LOW);
   digitalWrite(N3, HIGH);
   delay(1000);esperar un segundo
   //detener el motor M2
   digitalWrite(N3,LOW);
   digitalWrite(N4,LOW);

}
