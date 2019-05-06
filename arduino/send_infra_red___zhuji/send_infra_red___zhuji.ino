#include<Wire.h>

void setup() 
{
    Wire.begin();               //将设备设置为主机
    Serial.begin(9600);
}

    int i=23,j=5;               //发送的温度

void(* resetFunc) (void) = 0; //制造重启命令
  
void loop() 
{    
   if(j>0)
   { 
     Serial.println("j的值：");
     Serial.println(j);
     Wire.beginTransmission(4);    //向地址为4的从机发送数据
 //   Wire.write("fa song wen du wei ");
    Wire.write(i);
//    Wire.endTransmission();       //结束传送，可以不用，主要为了防止控制多个从机出错
    delay(500);
   
     j--;
 //   resetFunc();      //重启程序开始   
      
   }
}
