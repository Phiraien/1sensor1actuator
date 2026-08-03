// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  digitalWrite(10,LOW);
  delayMicroseconds(2);
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  long duration=pulseIn(10,HIGH);
  long distance=duration/58;
  if (distance > 0 && distance < 100){
    tone(8,1000,50);
    delay(distance*10);
  }
  else{
    noTone(8);
    delay(100);
  }
}
