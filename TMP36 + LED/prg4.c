void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  int reading = analogRead(A0);
  float voltage = reading * 5.0 / 1023.0;
  float tempC = (voltage - 0.5) * 100.0;

  if (tempC > 30){
    digitalWrite(9, HIGH);}
  else{
    digitalWrite(9, LOW);}
  delay(200);
}
