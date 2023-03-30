const int ledPin1 = 22; // LED1을 연결한 핀 번호
const int ledPin2 = 23; // LED2를 연결한 핀 번호

void setup() {
  pinMode(ledPin1, OUTPUT); // LED1 핀을 출력 모드로 설정
  pinMode(ledPin2, OUTPUT); // LED2 핀을 출력 모드로 설정
}

void loop() {
  digitalWrite(ledPin1, HIGH); // LED1 켜기
  digitalWrite(ledPin2, LOW); // LED2 끄기
  delay(500); // 0.5초 대기
  digitalWrite(ledPin1, LOW); // LED1 끄기
  digitalWrite(ledPin2, HIGH); // LED2 켜기
  delay(500); // 0.5초 대기
}