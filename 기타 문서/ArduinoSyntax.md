#아두이노 문법 설명

##### 이 문서는 arduino.cc 를 기반으로 작성되었습니다.

##### 작성자 : 이한결 (hs0835@naver.com)

## 1. pinMode()

### 설명 (Description)

특정한 핀이 INPUT(입력)이나 OUTPUT(출력) 중 어느 역할을 하는지 지정해준다.

밑의 예시에서는 디지털 13번 핀을 output(출력)으로 지정해 주었다.

INPUT이나 OUTPUT 외에 INPUT_PULLUP 모드도 있지만 사용 빈도가 적다.

### 문법 (Syntax)

pinMode(pin, mode)

### 매개변수 (Parameters)

pin : 핀 번호

mode : INPUT, OUTPUT 혹은 INPUT_PULLUP

### 사용 예시

pinMode(13, OUTPUT);

## 2. digitalWrite()

### 설명 (Description)

디지털 핀에 HIGH 혹은 LOW 값을 준다.

이 작업 전에 사용할 핀은 pinMode()에서 역할이 지정되어야 하고

만약 디지털 핀이 pinMode()에서 OUTPUT으로 지정되었다면

HIGH 값일 경우는 전류가 흐르게 되고

LOW 값일 경우에는 전류가 흐르지 않게 된다.

또 디지털 핀이 pinMode()에서 INPUT으로 지정되었다면

HIGH 값일 경우는 내부의 pullup(풀업) 저항을 활성화시키고,

LOW 값일 경우는 비활성화시킨다.

### 문법 (Syntax)

digitalWrite(pin, value)

### 매개변수 (Parameters)

pin : 핀 번호

value : HIGH 또는 LOW

### 사용 예시 (Example)

digitalWrite(13, HIGH)


## 3. delay()

### 설명 (Description)

매개변수에서 받은 시간 동안 프로그램을 정지시킨다.

이 때 시간은 밀리초(millisecond, ms) 단위이다.

 __1초 = 1000밀리초__ 이다.
 
### 문법 (Syntax)

delay(ms)

### 매개변수 (Parameters)

ms : 정지될 시간 (ms, 밀리초 단위)

### 사용 예시 (Example)

delay(1000)