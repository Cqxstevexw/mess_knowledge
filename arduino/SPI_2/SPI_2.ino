//使用SPI通信，74HC595芯片见串行变成并行，台式点亮LED灯
#include<SPI.h>
int  latchPin = 8;    //储存寄存器的时钟输入STCP连接8号引脚
int clockPin = 12;   //移位寄存器的时钟输入SHCP连接12号引脚
int  dataPin = 11;    //串行数据输入DS连接11号引脚

void setup() 
{
  pinMode(latchPin,1);
  pinMode(clockPin,1);
  pinMode(dataPin,1);
}

void loop() 
{
  for(int j = 0;j<256;j++)
      {
       digitalWrite(latchPin,0);    //当传送数据的时候，储存寄存器的时钟输入STCP引脚需要保持低电平
       shiftOut(dataPin,clockPin,LSBFIRST,j);   //
       digitalWrite(latchPin,1);    //传送完数据后，将储存寄存器的时钟输入STCP拉高
       delay(1000); 
       }
}
