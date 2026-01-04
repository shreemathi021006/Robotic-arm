#include <dummy.h>

#define BLYNK_TEMPLATE_ID "TMPL3r4UCW-si"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "UITdaGqr_aq5WHUG7BBCXFKx7HR4bKeV"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char ssid[] = "esp";
char pass[] = "12345678";

Servo myservo;
int servoPos = 90;  // Start at middle

// Slider V2 (0–180)
BLYNK_WRITE(V2){
  servoPos = param.asInt();
}

void setup() {
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Attach servo on pin 13 using PWM channel
  myservo.setPeriodHertz(50);   // servo frequency
  myservo.attach(13, 500, 2400); // min/max pulse width
  myservo.write(servoPos);
}

void loop() {
  Blynk.run();

  // Write servo only once per loop
  myservo.write(servoPos);
  delay(15); // Prevent vibration
}
