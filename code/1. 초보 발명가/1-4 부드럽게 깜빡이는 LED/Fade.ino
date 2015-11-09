int led = 9;
int brightness = 0; // LED의 밝기 값
int fadeAmount = 5; // LED의 밝기 변화 간격

// analogWrite를 사용해 LED가 Fade(점점 희미해지는) 되도록 하는 예제이다.
// 이번 예제는 아두이노의 PWM 기능을 사용하기 때문에 led를 PWM기능이 있는 핀에 연결해야한다.
// PWM 기능을 가진 핀은 앞에 '~'마크가 붙어 있다.
// (우노 기준 D3, D5, D6, D9, D10, D11)

// PWM 기능이 없는 핀에 LED를 연결하거나 brightness, fadeAmount를 변경하고 실행해보기를 권한다.

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness); // LED의 밝기 결정
  brightness = brightness + fadeAmount; // analogWrite를 사용해서 brightness의 값은 0~255
  if (brightness == 0 || brightness == 255) { // '||' 은 'or'와 같은 의미이다.
    fadeAmount = -fadeAmount ;
  }
  delay(30);
}

