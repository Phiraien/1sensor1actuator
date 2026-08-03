// C++ code
//
void setup()
{
  pinMode(10,INPUT_PULLUP);
  pinMode(11,OUTPUT);
}

void loop()
{
  if(digitalRead(10)==HIGH){
    tone(11,1000);}
  else{
    noTone(11);
  }
}
