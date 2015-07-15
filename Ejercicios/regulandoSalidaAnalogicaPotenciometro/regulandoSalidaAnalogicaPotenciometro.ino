int ledPin=9;  // PWM pin for the LED

void setup() {}// no setup needed


void loop()
{ 
  for (int i=0; i<=100; i++)  // ascending value for i
  {
    analogWrite(ledPin, i);  // sets brightess level to i
    delay(20);              // pauses for 100ms
    
  }
  for (int i=100; i>=0; i--)  //descending value for i
  {
    analogWrite(ledPin, i);  // sets brightess level to i
    delay(20);              // pauses for 100ms
    }
  }

