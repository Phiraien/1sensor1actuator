// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  int knob=analogRead(A0);
  int brightness=knob/4;
  analogWrite(13,brightness);
}
