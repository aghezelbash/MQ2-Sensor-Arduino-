#include "mq2.h"
mq2 m2 = mq2();
void setup() {
  m2.inits();
  m2.calibrate();
  Serial.begin(9600);
  //m2.getValue(true,'M',);
  // put your setup code here, to run once:

}

void loop() {
  double data[5];
  m2.getValue(false,'M',data);
  Serial.println(data[1]);
  /*for(int i=0;i<5;i++){Serial.print(data[i],4);Serial.print(',');}  // put your main code here, to run repeatedly:
  Serial.println();*/
  if(m2.thrValue('A',0.001)){Serial.println("yes");}
  
}
