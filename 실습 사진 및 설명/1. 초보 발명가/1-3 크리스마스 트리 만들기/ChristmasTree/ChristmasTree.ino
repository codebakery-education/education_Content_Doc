int whiteLED = 13;
int blueLED = 12;
int yellowLED = 11;
int greenLED = 10;
int redLED = 9;

// 5개의 LED를 연결하고 랜덤하게 한 개 씩 깜빡이도록 하는 예제

void setup() {
  pinMode(whiteLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  
  digitalWrite(whiteLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  
  Serial.begin(9600);
}

void loop() {
  int randNumber = random(9,14);
  Serial.println(randNumber);
  digitalWrite(randNumber,HIGH);
  delay(250);
  digitalWrite(randNumber,LOW);
  delay(250);
}
