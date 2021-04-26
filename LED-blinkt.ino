int ledPin = 33

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(100);
  usbMIDI.sendNoteOn(60, 127, 1); 
  delay(500);
  usbMIDI.sendNoteOff(60, 127, 1);
  delay(1000);
}
