#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <DHT.h>


LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

DHT dht(2,DHT11);

void setup() {
 lcd.begin(16,2);
 lcd.backlight();

 lcd.setCursor(0,0);
 lcd.print("ArduinoForever");

 dht.begin();
}

void pintaNumero(long numero)
{
   if(numero<10);
    lcd.print("0");
   lcd.print(numero); 
}

void loop() {
  // put your main code here, to run repeatedly:

 float t=dht.readTemperature();
 float h=dht.readHumidity();
 long tiempo=millis()/1000;
 long segundos=tiempo%60;
 long minutosTotales=tiempo/60;
 long minutos=minutosTotales%60;
 long horas=minutos/60;
 lcd.setCursor(0,1);
 pintaNumero(horas);
 lcd.print(":");
 pintaNumero(minutos);
 lcd.print(":");
 pintaNumero(segundos);

 lcd.setCursor(9,1);
 lcd.print(h);
 lcd.print("%");
 lcd.setCursor(12,1);
 lcd.print(t); 
 lcd.print("C");
}
