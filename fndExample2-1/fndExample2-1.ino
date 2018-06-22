const int aPinFndData[8]={13,12,11,10,9,8,7,6};
const int aPinFndSel[6]={22,23,24,25,26,27};


const int aFndData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};


void setup() {
  for(int i=0; i<8; i++){
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSel[i], OUTPUT);
  }
}

void loop() {
  //자리수 표현
  digitalWrite(aPinFndSel[0], LOW);
  digitalWrite(aPinFndSel[1], LOW);
  digitalWrite(aPinFndSel[2], LOW);
  digitalWrite(aPinFndSel[3], LOW);
  digitalWrite(aPinFndSel[4], LOW);
  digitalWrite(aPinFndSel[5], LOW);
  
  // 숫자 0 표기
  /*
  digitalWrite(aPinFndData[0], HIGH);  // 13번핀 - A 연결  HIGH==1
  digitalWrite(aPinFndData[1], HIGH);  // 12번핀 - B 연결  HIGH==1
  digitalWrite(aPinFndData[2], HIGH);  // 11번핀 - C 연결  HIGH==1
  digitalWrite(aPinFndData[3], HIGH);  // 10번핀 - D 연결  HIGH==1
  digitalWrite(aPinFndData[4], HIGH);  // 9번핀 - E 연결  HIGH==1
  digitalWrite(aPinFndData[5], HIGH);  // 8번핀 - F 연결  HIGH==1
  digitalWrite(aPinFndData[6], LOW);   // 7번핀 - G 연결  HIGH==1
  digitalWrite(aPinFndData[7], LOW);   // 6번핀 - H 연결  HIGH==1
  */

  for(int i=0; i<10; i++){
    for(int j=0; j<8; j++){
    digitalWrite(aPinFndData[j], (aFndData[i] >> j) & 1);
    }
    delay(1000);
}

}
