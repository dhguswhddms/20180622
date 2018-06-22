int pinLed[8]={2,3,4,5,6,7,8,9};

void setup() {
 for(int i=0; i<8; i++){
  pinMode(pinLed[i], OUTPUT);
 }
}

void loop() {
  for(int i=0; i<8; i++){
    digitalWrite(pinLed[i], HIGH);
    delay(100);
    digitalWrite(pinLed[i], LOW);
    
 }
  for(int i=6; i>0; i--){
    digitalWrite(pinLed[i], HIGH);
    delay(100);
    digitalWrite(pinLed[i], LOW);
    
 }
}
