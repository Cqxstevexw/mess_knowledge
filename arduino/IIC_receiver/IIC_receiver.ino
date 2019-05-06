#include<Wire.h>
void setup() 
{
  Wire.begin(4);    //将设备作为从机加入IIC总线，从机地址为4 
  Wire.onReceive(receiveEvent); //注册一个IIC事件
  Serial.begin(9600);
}

void loop() 
{
  delay(100);
}

//当主机发送的数据被接受的时候，将触发receiveEvent事件

void receiveEvent(int howMany)
{
  while(1<Wire.available())
      {
        char c =Wire.read();
        Serial.print(c);
       } 
   int x = Wire.read();
   Serial.println(x);    
 }
