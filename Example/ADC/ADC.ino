#define ADC_PIN 17 

void setup() {
  Serial.begin(9600); // 
}

void loop() {
  int value = 0;
  int sum = 0;

  for (int i = 0; i < 5; i++) { // sampling 5 times
    value = analogRead(ADC_PIN); // read the ADC value
    sum += value; // Accumulates the ADC value
    delay(1); // 
  }

  int sensorValue = sum / 5; // averaging
  Serial.println(sensorValue); // 
  delay(1000); // 
}
