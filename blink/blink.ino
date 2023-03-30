void setup() {
  pinMode(2, OUTPUT); // GPIO2 핀을 출력 모드로 설정
}

void loop() {
  digitalWrite(2, HIGH); // GPIO2 핀에 HIGH 값을 출력하여 내부 LED를 켭니다.
  delay(500); // 500ms (0.5초) 동안 대기합니다.
  digitalWrite(2, LOW); // GPIO2 핀에 LOW 값을 출력하여 내부 LED를 끕니다.
  delay(500); // 500ms (0.5초) 동안 대기합니다.
}