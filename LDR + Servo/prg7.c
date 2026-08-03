#include <Servo.h>
Servo myservo;
void setup(){
 myservo.attach(9); 
}
void loop(){
 int light=analogRead(A0);
  if(light<400){
    myservo.write(90);
  }
  else{
    myservo.write(0);
  }
  delay(200);
}
