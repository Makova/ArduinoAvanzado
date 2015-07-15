int pinR=13, pinA=12, pinV=11;

void setup() {
pinMode(pinR,OUTPUT);
pinMode(pinA,OUTPUT);
pinMode(pinV,OUTPUT);

Serial.begin(9600);

}

void loop() {
int valor=analogRead(A0); //resitencia LDR
int umbral=analogRead(A1); //potenciometro
  if ( valor < umbral/2 )
  {
    //valor inferior a 500
    digitalWrite(pinR,HIGH);
    digitalWrite(pinA,LOW);
    digitalWrite(pinV,LOW); 
    Serial.println("Valor Bajo");
  }
 else if ( valor < 1000 )
 {
  //valor superior a 500
  digitalWrite(pinR,LOW);
  digitalWrite(pinA,HIGH);
  digitalWrite(pinV,LOW);
  Serial.println("Valor Medio");
 }
 else
  {
  //valor superior a 500
  digitalWrite(pinR,LOW);
  digitalWrite(pinA,LOW);
  digitalWrite(pinV,HIGH);
  Serial.println("Valor Alto");
 }
delay(200);

}
