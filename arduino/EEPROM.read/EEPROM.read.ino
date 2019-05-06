#include<EEPROM.h>
int address = 0;
byte value;

void setup() 
{
    Serial.begin(9600);
 //   while(!Serial){}     
}

void loop() 
{
    value =EEPROM.read(address);
    Serial.print(address);
    Serial.print("\n");
    Serial.print(value,DEC);    //DEC是十进制
    address = address + 1;
    if(address==512)
        {
         address = 0;
         }
         delay(500);
}
