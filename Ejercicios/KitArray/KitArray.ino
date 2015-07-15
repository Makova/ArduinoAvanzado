int leds[]={4,5,6,78,9,10,11,12,13};      // nuestro array de leds
// leds[0], leds[9] 

/* int leds2[10];
leds2[0]=4;
leds2[1]=5;
...
leds2[9]=13
 */

void setup() {

  Serial.begin(9600);
  
  for(int i=0;i<sizeof(leds)/sizeof(int);i++)    
  { // Serial.print(i); Serial.print(","); Serial.print(leds)[i];      
    pinMode(leds[i],OUTPUT);  
  }  
  }  
void loop() {
  for(int i=0;i<sizeof(leds)/sizeof(int);i++)
  { digitalWrite(leds[i],HIGH);    delay(50);            digitalWrite(leds[i],LOW);}
{ 
  for(int i=sizeof(leds)/sizeof(int)-1;i>0;i--)
  { digitalWrite(leds[i],HIGH);    delay(50);            digitalWrite(leds[i],LOW);}
}  
}
