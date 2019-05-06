#include<EEPROM.h>

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT); 
    Serial.begin(9600);
    for(int i = 0;i<512;i++)
        {
         EEPROM.write(i,0);
         }  
   digitalWrite(LED_BUILTIN, HIGH);   // 输出高电平（打开LED）  
   delay(5000);                       // 等待1秒（1秒= 1000微秒）  
   digitalWrite(LED_BUILTIN, LOW);    // 输出低电平（关闭LED）  
   delay(1000);                       // 等待1秒 

}

void loop() 
{
}
