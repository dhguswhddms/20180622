int count=0;

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  count++;
  Serial.println(count);
  delay(1000);

}

void serialEvent(){
  char ch;
  ch = Serial.read();
  Serial.print("ch : ");
  Serial.println(ch);
}

