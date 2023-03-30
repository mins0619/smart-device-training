
// LED를 연결할 핀 번호를 정의합니다.
const int ledPin = 22;

void setup() {
  // LED 핀을 출력으로 설정합니다.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LED를 켭니다.
  digitalWrite(ledPin, HIGH);
  
  // 1초간 기다립니다.
  delay(1000);
  
  // LED를 끕니다.
  digitalWrite(ledPin, LOW);
  
  // 1초간 기다립니다.
  delay(1000);
}
