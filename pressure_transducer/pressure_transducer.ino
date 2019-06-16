void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(A0);
  float voltage_read = sensorValue/1023.0;
  float psi_read = (voltage_read - 0.1) * (250/2);
  Serial.println(psi_read);
  delay (100);
}
