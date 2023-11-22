#include "BNO055.h"

void setup() {
  delay(200);
  Serial.begin(115200);
  while(!BNO055_Initialize_Fusion())delay(100);
}

void loop() {
  float x,y,z,w;
  
  BNO055_ReadQua(&x,&y,&z,&w);
  Serial.print(x,4);Serial.print(' ');
  Serial.print(y,4);Serial.print(' ');
  Serial.print(z,4);Serial.print(' ');
  Serial.print(w,4);Serial.print(' ');
  BNO055_ReadAcc(&x,&y,&z);
  Serial.print(x);Serial.print(' ');
  Serial.print(y);Serial.print(' ');
  Serial.print(z);Serial.print(' ');
  BNO055_ReadLinAcc(&x,&y,&z);
  Serial.print(x);Serial.print(' ');
  Serial.print(y);Serial.print(' ');
  Serial.print(z);Serial.print(' ');
  BNO055_ReadEul(&x,&y,&z);
  Serial.print(x,4);Serial.print(' ');
  Serial.print(y,4);Serial.print(' ');
  Serial.print(z,4);Serial.print(' ');
  Serial.println();
  delay(5);
}
