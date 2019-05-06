#include<Wire.h>

void setup() 
{
  Wire.begin();//将这台设备设置为主机  
}

int x=19;


void loop() 
{  
  Wire.beginTransmission(4);  //向地址为4的从机传送数据
//  Wire.write("x is");         //向从机发送5B的字符串 
  Wire.write(x);              //发送1B的数据
  Wire.endTransmission();     //结束传送
//  x++;
  delay(500);
     
}
