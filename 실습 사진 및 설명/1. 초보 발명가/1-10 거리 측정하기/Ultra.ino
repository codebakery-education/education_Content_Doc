 void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT); // 센서 Trig 핀
  pinMode(3,INPUT); // 센서 Echo 핀
}

void loop()
{
  long duration, cm;

  digitalWrite(2,HIGH); // 센서에 Trig 신호 입력
  delayMicroseconds(10); // 10us 정도 유지
  digitalWrite(2,LOW); // Trig 신호 off

  duration = pulseIn(3,HIGH); // Echo pin: HIGH->Low 간격을 측정
  cm = microsecondsToCentimeters(duration); // 거리(cm)로 변환

  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(300); // 0.3초 대기 후 다시 측정
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
} 

long microsecondsToCentimeters(long microseconds)
{ 
  return microseconds / 29 / 2;
}
