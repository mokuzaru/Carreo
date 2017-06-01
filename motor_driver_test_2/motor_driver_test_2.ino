/*
 * Second test of moto driver L298
 * 1/6/2017
 */
 int N1=6;
 int N2=9;
 int N3=10;
 int N4=11;
void setup() {
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  pinMode(N3, OUTPUT);
  pinMode(N4, OUTPUT);
}

void loop() {
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N4, LOW);
  delay(500); //esperar medio segundo
  //Iniciar movimiento de M1 con PWM a Full 
  //Rango PWM o valor analog (0 - 255)
  //Primer valor 255
  //Frecuencia en casi todos los pines a 490HZ
  //en pines 5 y 6 980 HZ
  digitalWrite(N2,LOW);
  analogWrite(N1,255);
  delay(1000);
  //Luego de 1 segundo
  //energizar el segundo motor
  digitalWrite(N4,LOW);
  analogWrite(N3,255);
  delay(1000);
  //esperar un segundo y disminuir la velocidad del primer motor a la mitad
  digitalWrite(N2,LOW);
  analogWrite(N1,125);
  delay(1000);
  //El valor analogico SIEMPRE es un entero
  //esperar un segundo y reducir el segundo motor a un 20%
  digitalWrite(N4,LOW);
  analogWrite(N3,51);
  delay(1000);
  //invertir el giro de ambos motores a media velocidad (150 aprox)
  digitalWrite(N1,LOW);
  analogWrite(N2,150);
  digitalWrite(N3,LOW);
  analogWrite(N4,150);
  delay(1000);
  //esperar un segundo
  //apagar todo
  digitalWrite(N1,LOW);
  digitalWrite(N2,LOW);
  digitalWrite(N3,LOW);
  digitalWrite(N4,LOW);
  delay(5000);
  
}
