const int pinLed = 2;

void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  char ch;
  if(Serial.available()){ // 시리얼 버퍼에 값이 있는지 확인!
    ch = Serial.read();
    Serial.println("ch : " + String(ch));
  }
    if(ch == 'O')
    digitalWrite(pinLed, HIGH);
    else if(ch == 'X')
    digitalWrite(pinLed, LOW);
  }

