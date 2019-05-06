String ch ="";

void setup()
{
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}

void loop() 
{
 
  while(Serial.available()>0)
  {
    ch += char(Serial.read());//循环赋值给ch,使ch是一个字符串
    
    delay(2);//特别留意的是读串口时的delay(2)不能删掉，
  }           //否则串口缓冲区不够时间接受数据。即使调小延时也会出错。具体数值也可以实验决定。
  if(ch.length()>0)
   {
      Serial.print(ch);
      if(ch=="kaideng")
         {
             digitalWrite(13,1);
             Serial.print(" turn on\n");
         }
     if(ch=="guandeng")
         {
             digitalWrite(13,0);
             Serial.print(" turn off\n");
         } 
     ch ="";
   }    
}
