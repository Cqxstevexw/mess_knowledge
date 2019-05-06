#include<Wire.h>

int i,j;

void setup() 
{
    Wire.begin();               //将设备设置为主机
    Serial.begin(9600);
}

void loop() 
{    
    i=18;
    for(j=2;j>0;j--)
    {
    Wire.beginTransmission(1);    //向地址为1的从机发送数据
    Wire.write(i);
    Wire.endTransmission();       //结束传送
    delay(500);
    }
}
