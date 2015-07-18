#include <DHT.h>
#define DHTTYPE DHT11

int primerLed=4, ultimoLed=13;
int pinDHT=2;

DHT dht(pinDHT, DHTTYPE);

void setup() {            

  Serial.begin(9600);  
  

  dht.begin();

}

void loop() {
  
  float t = dht.readTemperature();

  if (isnan(t)) {
    Serial.println("Error leyendo el sensor!");
    return;
}
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
}
