#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pca;

void setup() {
  pca.begin();
  pca.setPWMFreq(50);   // Servo frequency
}

void loop(){

pca.setPWM(0,0,240);
delay(1000);
pca.setPWM(1,0,330);
delay(1000);
pca.setPWM(2,0,420);
delay(1000);
pca.setPWM(3,0,510);
delay(1000);
pca.setPWM(4,0,600);
delay(1000);


pca.setPWM(4,0,510);
delay(1000);
pca.setPWM(3,0,420);
delay(1000);
pca.setPWM(2,0,330);
delay(1000);
pca.setPWM(1,0,240);
delay(1000);
pca.setPWM(0,0,150);
delay(1000);
}
