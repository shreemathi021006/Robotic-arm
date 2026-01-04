#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pca;

void setup() {
  pca.begin();
  pca.setPWMFreq(50);   // Servo frequency
}

void loop() {
  pca.setPWM(0, 0, 150);  // 0°
  delay(1000);

  pca.setPWM(0, 0, 375);  // 90°
  delay(1000);

  pca.setPWM(0, 0, 600);  // 180°
  delay(1000);
}
