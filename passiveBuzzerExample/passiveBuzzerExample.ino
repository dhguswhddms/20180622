const int pinBuzzer = 13; //13번핀을 Buzzer 핀에 연결

const float aPitchData[8]={1046.5,1174.65,1318.51,1396.91,1567.98,1760,1975.53,2093.00};


void setup() {
  pinMode(pinBuzzer, OUTPUT);

  tone(pinBuzzer, 1864.65);
  delay(500);
  tone(pinBuzzer, 1567.98);
  delay(250);
  tone(pinBuzzer, 1396.91);
  delay(250);
  tone(pinBuzzer, 1244.5);
  delay(500);
  tone(pinBuzzer, 1396.91);
  delay(250);
  tone(pinBuzzer, 1567.98);
  delay(250);
  tone(pinBuzzer, 1864.65);
  delay(500);
  tone(pinBuzzer, 1567.98);
  delay(250);
  tone(pinBuzzer, 1396.91);
  delay(250);
  tone(pinBuzzer, 1244.5);
  delay(500);
  tone(pinBuzzer, 2093);
  delay(500);
  tone(pinBuzzer, 1567.98);
  delay(250);
  tone(pinBuzzer, 1396.91);
  delay(250);
  tone(pinBuzzer, 1244.5);
  delay(500);
  tone(pinBuzzer, 1396.91);
  delay(250);
  tone(pinBuzzer, 1567.98);
  delay(250);
  tone(pinBuzzer, 2093);
  delay(500);
  
  noTone(pinBuzzer);

}

void loop() {
  

}
