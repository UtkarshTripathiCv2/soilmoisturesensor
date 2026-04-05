#define SOIL_PIN 34   // Analog pin

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(SOIL_PIN);

  Serial.print("Soil Moisture Value: ");
  Serial.println(value);

  delay(1000);
}
