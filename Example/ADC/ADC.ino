

const int potPin = A2;

// 用于存储电容湿度的变量
int potValue = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // 读取湿度计值
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}
