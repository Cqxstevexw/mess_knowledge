char col;      //运行之后在串口监视器输入，如果是Serial.read（）的话 ，会依次将所输入的字符一个一个的打印出来，如果把Serial.read（）换成Serial.peek（）
               //的话，打印出来的汉化 只是第一个输入的符号，然后不断的循环下去，因为每次只可以打印一个，peek不会清除缓存，而read会 
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  while(Serial.available()>0)
    {
      col = Serial.peek();
      Serial.print("Read:");
      Serial.println(col);
      delay(1000);
     }
}
