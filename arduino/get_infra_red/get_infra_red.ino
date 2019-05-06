#include <IRremote315.h>

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
       dump(&results);
       irrecv.resume();           //接收下一个编码
       }
}

void dump(decode_results *results)
{
  int count =results ->rawlen;
  Serial.print("Raw(");
  Serial.print(count);
  Serial.print("):");
  for(int i =0;i<count;i++)
      {
        Serial.print(results->rawbuf[i]*USECPERTICK);
        Serial.print(",");
       }
       Serial.println();
 }
