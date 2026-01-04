
#define BLYNK_PRINT Serial
#include <WiFiClient.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "gyE3coAoBT3tB4BkdlGW2x7hDx7SIjRa";
char ssid[] = "esp";   // Replace with your Wi-Fi name
char pass[] = "12345678"; // Replace with your Wi-Fi password

int value_1;


BLYNK_WRITE(V0) {  
  value_1 = param.asInt();
  Serial.println(value_1);
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "blynk.cloud",80); 
}
void loop() {
  Blynk.run(); 
}
