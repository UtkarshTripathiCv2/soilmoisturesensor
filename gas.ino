#define MQ2_PIN 34   // Analog pin

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("MQ-2 Sensor Starting...");
}

void loop() {
  int gasValue = analogRead(MQ2_PIN);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  delay(1000);
}
