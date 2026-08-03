// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
 int light=analogRead(A0);
 if(light<400){
    digitalWrite(13,LOW);
  }
 else
    digitalWrite(13,HIGH);
}
