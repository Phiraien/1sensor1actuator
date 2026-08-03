void setup() {
  pinMode(10, OUTPUT);
}
void loop() {
  int reading = analogRead(A0);
  float voltage = reading * 5.0 / 1023.0;
  float tempC = (voltage - 0.5) * 100.0;
  if (tempC > 28) {
    digitalWrite(10, HIGH); // Activate fan
  } else {
    digitalWrite(10, LOW);  // Deactivate fan
  }
  delay(300);
}
