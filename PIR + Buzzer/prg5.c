// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  if (digitalRead(9)==HIGH){
    tone(8,1500);
    delay(3000);
    noTone(8);}
}
