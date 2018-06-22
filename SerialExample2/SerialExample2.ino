void setup() {
  Serial.begin(9600);

}

void loop() {
  String str;
  if(Serial.available()){ // 시리얼 버퍼에 값이 있는지 확인!
    str = Serial.readString();
    Serial.println(" str : " + str);
  }
}
