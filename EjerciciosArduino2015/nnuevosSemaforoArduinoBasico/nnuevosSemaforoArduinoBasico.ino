void setup()
{ pinMode(ledverde,OUTPUT);
  pinMode(ledrojo,OUTPUT);
}

void loop()
{ int esperaVerde=1000;
  int esperaRojo=500;
  int ledverde;
  int ledrojo;
  digitalWrite(ledverde,LOW);
  digitalWrite(ledrojo,HIGH);
  delay(esperaVerde);
  digitalWrite(ledrojo,LOW);
  digitalWrite(ledverde,HIGH);
  delay(esperaRojo);
} 

