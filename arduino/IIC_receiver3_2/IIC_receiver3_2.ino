#include<Wire.h>
void setup() 
{
  Wire.begin(2);    //将设备作为从机加入IIC总线，从机地址为4 
  Wire.onReceive(receiveEvent2); //注册一个IIC事件
  int led = 13;
  pinMode(led, OUTPUT);   //output可以改为1
}

void loop() 
{
  delay(10);
}

//当主机发送的数据被接受的时候，将触发receiveEvent事件

void receiveEvent2(int howMany)
{
    int led = 13;      //这一行可以不加，只要前面设为全局就好，即在2个函数之前
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);   // high可以改为1；
  delay(10);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(10);                       // wait for a second
 }
