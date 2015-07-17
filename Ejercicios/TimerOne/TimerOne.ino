#include <TimerOne.h>

#define LEDPIN 13

void setup()

{
  pinMode(LEDPIN,OUTPUT);
  Timer1.initialize(100000);
  Timer1.attachInterrupt(timerlsr);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

void timerlsr()

{
   if(digitalRead(LEDPIN==HIGH))

    digitalWrite(LEDPIN,LOW);
  
   else

    digitalWrite(LEDPIN,HIGH);
   
  
}
