
void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, HIGH);
  delay(500);        ///1000ms=1초
  digitalWrite(1, LOW);
  delay(500);
}
