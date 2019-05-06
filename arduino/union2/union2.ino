#include<EEPROM.h>

union data              //union 是共用体的 定义的关键词  联合
{
float a;
byte b[4]; 
};

data c;
int addr = 0;
int led = 13;

void setup() 
{
  c.a=987.65;
  for(int i = 0;i<4;i++)
      {
        c.b[i]=EEPROM.read(i);
       }
   Serial.begin(9600);
}

void loop() 
{
  Serial.println(c.a);
    delay(1000);
}
