#include <Servo.h>
Servo myservo;

void setup(){
 myservo.attach(9);
}
void loop(){
 int knob=analogRead(A0);
 int angle=knob*180L*1023;
 myservo.write(angle);
 delay(15);
}
