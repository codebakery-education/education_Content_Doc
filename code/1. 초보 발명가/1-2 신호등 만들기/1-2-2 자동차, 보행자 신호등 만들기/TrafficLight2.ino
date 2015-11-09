int carRed = 12;
int carYellow = 11;
int carGreen = 10;

int pedRed = 9;
int pedGreen = 8;

int crossTime = 5000;

void setup() {
pinMode(carRed, OUTPUT);
pinMode(carYellow, OUTPUT);
pinMode(carGreen, OUTPUT);

pinMode(pedRed, OUTPUT);
pinMode(pedGreen, OUTPUT);

digitalWrite(carGreen, HIGH);

digitalWrite(pedRed, HIGH);
}

void loop() {
digitalWrite(carGreen, LOW);

digitalWrite(carYellow, HIGH);
delay(2000);

digitalWrite(carYellow, LOW);

digitalWrite(carRed, HIGH);
delay(1000);

digitalWrite(pedRed, LOW);

digitalWrite(pedGreen, HIGH);
delay(crossTime);

for (int x=0; x<5; x++) {
digitalWrite(pedGreen, HIGH);
delay(250);

digitalWrite(pedGreen, LOW);
delay(250);
}

digitalWrite(pedRed, HIGH);
delay(500);

digitalWrite(carYellow, HIGH);

digitalWrite(carRed, LOW);
delay(1000);

digitalWrite(carYellow, LOW);
digitalWrite(carGreen, HIGH);
delay(2000);
}