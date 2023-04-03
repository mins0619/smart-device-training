#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// DHT11 핀 번호와 타입 설정
#define DHTPIN 13
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// LCD 설정
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup() {
  // DHT11, LCD 초기화
  dht.begin();
  lcd.init();
  lcd.backlight();  // 백라이트 켜기
}

void loop() {
  // 습도와 온도 값 받아오기
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // 온도와 습도 값을 출력할 위치 지정
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.setCursor(0, 1);
  lcd.print("Temperature: ");

  // 온도와 습도 값 출력
  lcd.setCursor(10, 0);
  lcd.print(humidity);
  lcd.print("%");
  lcd.setCursor(13, 1);
  lcd.print(temperature);
  lcd.print("C");
  
  delay(2000);  // 2초 대기
  
  lcd.clear();  // LCD 초기화
}



// #include <LiquidCrystal_I2C.h> // Hello
// int lcdColumns = 16;            // 가로 16
// int lcdRows = 2;                // 세로 2
// LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);     // LCD창 주소 및 출력 범위 지정
// void setup(){
//   lcd.init();         // LCD 초기화
//   lcd.backlight();    // LCD 백라이트 On
// }
// void loop(){
//   lcd.setCursor(0, 0);            // 커서를 (0,0)으로 이동
//   lcd.print("Hello, World!");
//   delay(1000);
//   lcd.clear();                    // LCD 초기화
//   lcd.setCursor(0,1);             // 커서를 (0,1)로 이동
//   lcd.print("Hello, World!");
//   delay(1000);
//   lcd.clear();                    // LCD 초기화
// }




// #include <DHT.h> // 온습도 실습코드

// #define DHTPIN 13          // DHT11 센서 연결 핀
// #define DHTTYPE DHT11     // DHT11 센서 사용

// DHT dht(DHTPIN, DHTTYPE); // DHT11 객체 생성

// void setup() {
//   Serial.begin(9600);    // 시리얼 통신 시작
//   dht.begin();           // DHT11 초기화
// }

// void loop() {
//   delay(2000);           // 2초 간격으로 측정

//   float temp = dht.readTemperature(); // 온도 측정
//   float hum = dht.readHumidity();     // 습도 측정

//   // 시리얼 모니터 출력
//   Serial.print("Temperature: ");
//   Serial.print(temp);
//   Serial.print(" °C, Humidity: ");
//   Serial.print(hum);
//   Serial.println(" %");

//   // 시각화 툴 출력
//   Serial.print("T:");
//   Serial.print(temp);
//   Serial.print(",H:");
//   Serial.println(hum);
// }

