#include <Servo.h>
char c;
Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if (Serial.available()) {
     c = Serial.read();
     if ( c == 'F'){
         for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
         myservo.write(pos);
         Serial.println(pos);
         Serial.println(c);
         // tell servo to go to position in variable 'pos'
         delay(10);           // waits 15ms for the servo to reach the position
  } }
  if ( c == 'B'){
  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos); 
    Serial.println(pos);
    Serial.println(c);// tell servo to go to position in variable 'pos'
    delay(10);           // waits 15ms for the servo to reach the position
}
}}}
