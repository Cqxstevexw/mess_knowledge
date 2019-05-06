#include<EEPROM.h>      //电可擦可编程只读寄存器是一种断电后数据不丢失的储存设备
 int addr = 0;   //地址
void setup() 
{
}

void loop()               //只能储存字节类型的数据
{
    //模拟值读出后是0~1023的，但是内个字节的大小为0~255
    //所以这里的将值除以4再储存到val中
    int val = analogRead(0)/4;
    EEPROM.write(addr,val);
    addr = addr + 1;
    if(addr == 512)
    {
     addr = 0;
     }
     delay(100);
}
