int carRed = 12;

int carYellow = 11;

int carGreen = 10;

void setup() {

pinMode(carRed, OUTPUT);

pinMode(carYellow, OUTPUT);

pinMode(carGreen, OUTPUT);

digitalWrite(carGreen, HIGH);

}

void loop() {
  
  digitalWrite(carGreen, LOW);
  delay(500);
  
  digitalWrite(carYellow, HIGH);
  delay(500);
  
  digitalWrite(carYellow, LOW);
  delay(500);
  
  digitalWrite(carRed, HIGH);
  delay(500);
  
  digitalWrite(carRed, LOW);
  delay(500);
  
  digitalWrite(carYellow, HIGH);
  delay(500);
  
  digitalWrite(carYellow, LOW);
  delay(500);
  
  digitalWrite(carGreen, HIGH);
  delay(500);
  
}
