#include <IRremote.h>


int RECV_PIN=11;
IRrecv irrecv(RECV_PIN);
decode_results results;      //用于储存 编码结果的对象

void setup() 
{
    Serial.begin(9600);
    irrecv.enableIRIn();        //初始化红外解码  
}

void loop() 
{
   if(irrecv.decode(&results))
      {
       Serial.println(results.value,HEX);
       irrecv.resume();           //接收下一个编码
       }
}
