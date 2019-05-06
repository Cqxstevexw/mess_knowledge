#include<Wire.h>

void setup() 
{
  Wire.begin();//将这台设备设置为主机  
}

byte x=0;

void loop() 
{
  Wire.beginTransmission(1);  //向地址为4的从机传送数据
  Wire.write("x is");         //向从机发送5B的字符串 
  Wire.write(x);              //发送1B的数据
  Wire.endTransmission();     //结束传送
  x++;
  delay(500);
  if(x>10)
  {
    x=0;
    }
  Wire.beginTransmission(2);  //向地址为4的从机传送数据
  Wire.endTransmission();     //结束传送
  delay(500);
}
