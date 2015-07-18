#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{ Serial.begin(9600);
irrecv.enableIRIn(); 
pinMode(12, OUTPUT);
}
void loop() {
if (irrecv.decode(&results)) {
  switch(results.value)
  {
      case 0x6F5974BD:
        digitalWrite(12,HIGH);
      break;
      case 0x25802501:
        digitalWrite(12,LOW);
      break;
      
      default:
        Serial.print(results.value, HEX);
        Serial.print(" ");
        Serial.println(results.value);
        break;
  }
  irrecv.resume(); // Receive the next value 
  }
}
