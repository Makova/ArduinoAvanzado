int latchPin =8;   //Pin conectado a ST_CP
int clockPin = 12;   //Pin conectado a SH_CP
int dataPin = 11;   // Pin conectado a DS
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
void loop() {
  
  for (int numberToDisplay = 0; numberToDisplay < 256; numberToDisplay++) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST,numberToDisplay);

  digitalWrite(latchPin, HIGH);

  delay(500);
  }
}
