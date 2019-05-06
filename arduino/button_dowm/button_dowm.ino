 int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
    pinMode(13,OUTPUT);
    pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    buttonState = digitalRead(2);
    if(buttonState==HIGH)
    {
      digitalWrite(13,1);//点亮LED灯
     }
    else
    {
      digitalWrite(13,LOW);
     }    
}
