#include<Wire.h>

void setup() 
{
  Wire.begin();
  Serial.begin(9600);
}

void loop() 
{
  Wire.requestFrom(2,6);    //向2号从机请求5B的数据
  while(Wire.available())
      {
         char c = Wire.read();
         Serial.print(c);      
       } 
       delay(500);
}
