String inputString = "";
boolean stringComplete = false;

void setup() 
{
  Serial.begin(9600);
  inputString.reserve(200);//设置字符串储存量为200字节
}

void loop() 
{
  if(stringComplete)                //刚开始不会输出，因为 stringComplete被定义为false
      {
        Serial.println(inputString);
        inputString ="";
        stringComplete = false;
       }
}
void serialEvent()
{
  while(Serial.available())
      { 
        char intChar =(char)Serial.read();
        inputString += intChar;
        if(intChar=='\n')
            {
             stringComplete =true;
             }
       }
 }


