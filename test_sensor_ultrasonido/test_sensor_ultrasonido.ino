/*
 * Test for ping ultrasonic sensor hc-06
 * 1/6/2017
 */
 int trig = 12;
 int echo = 13;
void setup() {
  Serial.begin(9600);//inicializamos la comunicación a 9600 bauds
  pinMode(echo, OUTPUT); //Declaramos el pin como salida
  pinMode(trig, INPUT); //Declaramos el pin como entrada
}

void loop() {
  long duracion, cm; //variables long 
  //enviamos el pulso 
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(echo, HIGH);
  delayMicroseconds(5);
  digitalWrite(echo,LOW);

  //Leemos el pulso de retorno y lo asignamos a la variable duracion
  duracion = pulseIn(trig, HIGH);

  //asignamos el valor de centimetros a la variable cm
  cm = microsegundoaCentimetros (duracion);

  //imprimimos en el monitor serie
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(1000);
  //esperamos un segundo para la siguiente medición
  
}

long microsegundoaCentimetros (long microsegundos){
  return microsegundos / 29 / 2 ;
}

