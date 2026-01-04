#include <Wire.h>
//#include <Adafruit_PWMServoDriver.h>

//Adafruit_PWMServoDriver pca;

int ang ;
//int pulse;
void setup() {

  Serial.begin(9600);
  //pca.begin();
  //pca.setPWMFreq(50);
  // put your setup code here, to run once:

}

void loop() {

  if (Serial.available()>0){
    ang = Serial.read();
    //pulse = map(ang,0,180,150,600);
    //pca.setPWM(0, 0, pulse);
    Serial.println("angle at which the servo roates is:");
    Serial.println(ang);
  }
  // put your main code here, to run repeatedly:

}
