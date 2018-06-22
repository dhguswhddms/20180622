const int pinCds = A0;
const int pinVcc = 13;
const int pinGnd = 12;

void setup() {
  Serial.begin(115200);
  pinMode(pinCds, INPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinGnd, OUTPUT);

  digitalWrite(pinVcc, HIGH); // pinVcc 5V를 연결
  digitalWrite(pinGnd, LOW);
}

void loop() {
  int adcData = analogRead(pinCds);
  Serial.println("adc 값은 " + String(adcData));
  delay(1000);

}
