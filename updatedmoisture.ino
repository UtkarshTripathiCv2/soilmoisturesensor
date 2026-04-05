#define SOIL_PIN 34   // Analog pin

// You should calibrate these values for your specific sensor
// Dip the sensor in water to find the 'wet' value 
// Leave it in the air to find the 'dry' value
const int dryValue = 4095; // Typical max for ESP32 (12-bit ADC)
const int wetValue = 1500; // Example value when fully submerged

void setup() {
  Serial.begin(115200);
}

void loop() {
  int rawValue = analogRead(SOIL_PIN);

  // map(value, fromLow, fromHigh, toLow, toHigh)
  // We swap wetValue and dryValue to ensure wet = 100%
  int percentage = map(rawValue, dryValue, wetValue, 0, 100);

  // Constrain the value between 0 and 100 to avoid out-of-bounds numbers
  percentage = constrain(percentage, 0, 100);

  Serial.print("Raw Value: ");
  Serial.print(rawValue);
  Serial.print(" | Moisture Level: ");
  Serial.print(percentage);
  Serial.println("%");

  delay(1000);
}
