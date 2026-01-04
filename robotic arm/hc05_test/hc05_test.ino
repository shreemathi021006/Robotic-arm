void setup() {
  Serial.begin(9600);
  Serial.println("HC-05 test ready...");
}

void loop() {

  // Data from HC-05 → Serial Monitor
  if (Serial.available()) {
    char c = Serial.read();
    if (c = "F"){
      Serial.println("Rotating clockwise");
    }
    if (c = "B"){
      Serial.println("Rotating anticlockwise");
    }
    Serial.print("BT → ");
    Serial.println(c);
}

}
