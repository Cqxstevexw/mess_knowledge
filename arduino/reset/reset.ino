void setup()
 {
   Serial.begin(9600);
   Serial.println("ok");//程序启动时准备就绪
   pinMode(13,1);
}

void(* resetFunc) (void) = 0; //制造重启命令

void loop()
 {
       digitalWrite(13,1);
       Serial.println("raset");//反馈信息给串口监视器准备重启
      delay(2000);    //延迟时间
      resetFunc();      //重启程序开始
     digitalWrite(13,0);
     delay(2000);//延时for函数计算时间
  
 }

