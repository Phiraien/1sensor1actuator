void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  // map the sensor reading to a range for the LED
  analogWrite(9, map(sensorValue, 0, 1023, 0, 255));
  delay(100); // Wait for 100 millisecond(s)
}
