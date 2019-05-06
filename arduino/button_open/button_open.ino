 int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
    pinMode(13,OUTPUT);
    pinMode(2,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
    buttonState = digitalRead(2);
    if(buttonState==HIGH)
    {
      digitalWrite(13,0);
     }
    else
    {
      digitalWrite(13,1);
     }    
}
