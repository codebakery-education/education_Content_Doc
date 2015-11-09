int piezo = 13;
// mid 도 = 261, 레 = 294, 미 = 330
int c = 261;
int d = 294;
int e = 330;

void setup() {
  pinMode(piezo,OUTPUT); // piezo 부저 연결 핀
}

// '비행기'라는 동요를 piezo 부저를 이용해 출력하는 예제이다.
// 미 레 도 레 미 미 미 레 레 레 미 미 미 미 레 도 레 미 미 미 레 레 미 레 도


void loop() {
  tone(piezo, e, 750);
  tone(piezo, d, 500);
  tone(piezo, c, 500);
  tone(piezo, d, 500);
  
  tone(piezo, e, 500);
  tone(piezo, e, 500);
  tone(piezo, e, 1000);
  
  tone(piezo, d, 500);
  tone(piezo, d, 500);
  tone(piezo, d, 1000);
  
  tone(piezo, e, 500);
  tone(piezo, e, 500);
  tone(piezo, e, 1000);
  
  tone(piezo, e, 750);
  tone(piezo, d, 500);
  tone(piezo, c, 500);
  tone(piezo, d, 500);
  
  tone(piezo, e, 500);
  tone(piezo, e, 500);
  tone(piezo, e, 1000);
  
  tone(piezo, d, 500);
  tone(piezo, d, 500);
  tone(piezo, e, 750);
  tone(piezo, d, 500);
  
  tone(piezo, c, 2000);
}
