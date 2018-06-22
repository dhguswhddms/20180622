#include <Time.h>
#include <TimeLib.h>

#include <MsTimer2.h>;

const int aPinFndData[8]={13,12,11,10,9,8,7,6};
const int aPinFndSel[6]={22,23,24,25,26,27};
int count=0;

const int aFndData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F};

const int aFndSel[6]={0x3E, 0x3D,0x3B,0x37,0x2F,0x1F};

void setup() {
  for(int i=0; i<8; i++){
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSel[i], OUTPUT);
  }
  MsTimer2::set(1000,countUp);
  MsTimer2::start();
}

void loop() {

  displaySelect(aFndSel[2]); //100의 자리
  displayNumber(aFndData[count/100]); // count의 100의 자리를 표현
  delay(1);

  displaySelect(aFndSel[1]);
  displayNumber(aFndData[count%100/10]);
  delay(1);

  displaySelect(aFndSel[0]);
  displayNumber(aFndData[count%10]);
  delay(1);
}

void countUp()
{
  count++;
}

