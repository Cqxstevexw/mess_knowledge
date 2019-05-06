
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  String inString="";
  while(Serial.available()>0)
     {
        char inChar = Serial.read();
        inString +=(char)inChar;
        delay(10);//延迟函数用于等待输入字符完全进入接受缓存区
      }
   if(inString!="")
     {
      Serial.print("Input String:");
      Serial.println(inString);
      }
}
