void setup()
{
  pinMode(11, OUTPUT);
  pinMode(9,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(9)==LOW){
    digitalWrite(11,HIGH);
  }
  else{
    digitalWrite(11,LOW);
  }
}
