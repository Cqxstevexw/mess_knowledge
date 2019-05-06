//打开串口监视器可看到结果，这个是比较Serial.begin和 Serial.write的区别

float FLOAT=1.23456;
int INT=1234;
byte BYTE[6] = {48,49,50,51,52,53};
char zhong = '日';
void setup() {

   Serial.begin(9600);
   Serial.println("serial prin:");// Serial.println发送的是，将数据转化
   Serial.println(zhong);           //为字符，然后把字符对应的ASCII码发
   Serial.println(INT,BIN);       //送出去，（串口监视器接收到ASCII会
   Serial.println(INT,OCT);       //显示对应的字符
   Serial.println(INT,DEC);
   Serial.println(INT,HEX);
   Serial.println(FLOAT);
   Serial.println(FLOAT,0);
   Serial.println(FLOAT,2);
   Serial.println(FLOAT,4);
   Serial.println();
   Serial.println("Serial write");
   Serial.write(zhong);    //   write发送的书数据本身，  
   Serial.println();      //但串口监视器收到数据后 会把数据当成 ASCII码
   Serial.write("Serial"); //然后显示ASCII所对应的字符
   Serial.println();     //
   Serial.write(BYTE,6);  //

}

void loop()
{
}
   
   


