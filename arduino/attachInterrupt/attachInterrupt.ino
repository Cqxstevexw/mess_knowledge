void setup()
{ 
  attachInterrupt(0,LED,CHANGE);
  attachInterrupt(1,DOWN,CHANGE);
  pinMode(13,1);
  pinMode(8,1);
  pinMode(2,0);
}

void loop()
{
  digitalWrite(13,HIGH);   // high可以改为1；
  delay(3000);    
  digitalWrite(13,LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
 
}

void LED()
{
   digitalWrite(8,HIGH);
  //  delay(5000);                    //
  
  // digitalWrite(8,0);
 }
 
 void DOWN()
 {
  digitalWrite(8,0);
  }
