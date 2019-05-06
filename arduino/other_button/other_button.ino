
int buttonPin = 2;
int ledPin = 13;
boolean ledState =false;     //记录LED的状态 
boolean buttonState = true;   //记录按键的状态

void setup() {
  // put your setup code here, to run once:
  
   pinMode(buttonPin,INPUT_PULLUP);
   pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
   //等待按键按下 
   while(digitalRead(buttonPin)==HIGH)
   {
   }
  if(ledState==true)
    {
      digitalWrite(ledPin,LOW);
      ledState=!ledState;      //将非ledState的值赋给ledState
    }
    else
     {
      digitalWrite(ledPin,HIGH);
      ledState =!ledState;
     }
   delay(500);  
}
