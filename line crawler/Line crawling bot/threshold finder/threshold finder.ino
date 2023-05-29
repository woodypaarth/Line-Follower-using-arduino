void setup() {
  Serial.begin(9600);


}

void loop() {
  int analog1 = digitalRead(3);
  int analog2 = digitalRead(11);
  Serial.print("Analog1=");
  Serial.print(analog1);
  Serial.print("\n");
  Serial.print("Analog2=");
  Serial.print(analog2);
  Serial.print("\n");
  delay(1000);
}
