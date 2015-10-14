int piezo = 13;

void setup() {
  pinMode(piezo, OUTPUT);
}

void loop() {
  // 모스부호로 "HELP" 출력하기
  // 단음은 0.5초, 장음은 1초
  // 음계는 mid C로 통일
  
  // H (. . . .)
  tone(piezo, 261, 500);
  tone(piezo, 261, 500);
  tone(piezo, 261, 500);
  tone(piezo, 261, 500);
  
  delay(500);
  
  // E (.)
  tone(piezo, 261, 500);
  
  delay(500);
  
  // L (. - . . )
  tone(piezo, 261, 500);
  tone(piezo, 261, 1000);
  tone(piezo, 261, 500);
  tone(piezo, 261, 500);
  
  delay(500);
  
  // P (. - - .)
  tone(piezo, 261, 500);
  tone(piezo, 261, 1000);
  tone(piezo, 261, 1000);
  tone(piezo, 261, 500);
  
  delay(500);
}
