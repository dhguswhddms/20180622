const int aPinFndData[8]={13,12,11,10,9,8,7,6};
const int aPinFndSel[6]={22,23,24,25,26,27};


const int aFndData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};

const int aFndSel[6]={0x3E, 0x3D,0x3B,0x37,0x2F,0x1F};

void setup() {
  for(int i=0; i<8; i++){
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSel[i], OUTPUT);
  }
}

void loop() {
  displaySelect(aFndSel[5]);    //10만의 자리에 1을 표현
  displayNumber(aFndData[1]);

  delay(1);
  
  displaySelect(aFndSel[4]);    //10만의 자리에 1을 표현
  displayNumber(aFndData[2]);

  delay(1);
  displaySelect(aFndSel[3]);    // 1천의 자리에 3를 표현
  displayNumber(aFndData[3]);

  delay(1);
  displaySelect(aFndSel[2]);    // 1백의 자리에 4를 표현
  displayNumber(aFndData[4]);

  delay(1);
  displaySelect(aFndSel[1]);    // 10의 자리에 5를 표현
  displayNumber(aFndData[5]);

  delay(1);
  displaySelect(aFndSel[0]);    // 1의 자리에 6을 표현
  displayNumber(aFndData[6]);
  delay(1);
}
