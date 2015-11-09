int piezo = 13;

void setup() {
  pinMode(piezo, OUTPUT);
}

void loop() {
  analogWrite(piezo, 64);
  delay(1000);
  
  analogWrite(piezo, 128);
  delay(1000);
  
  analogWrite(piezo, 256);
  delay(1000);
}
