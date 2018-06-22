void displayNumber(int tmp){
 for(int j=0; j<8; j++){
    digitalWrite(aPinFndData[j], (tmp >> j) & 1);
    }


}

void displaySelect(int tmp){
  for(int i=0; i<6; i++){
    digitalWrite(aPinFndSel[i], (tmp >> i) & 1);
  }
  

  
}

