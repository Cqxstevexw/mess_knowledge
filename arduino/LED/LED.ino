void setup() {
  // put your setup code here, to run once:
  int led = 13;
pinMode(led, OUTPUT);   //output可以改为1 ·

}

void loop() {
    int led = 13;      //这一行可以不加，只要前面设为全局就好，即在2个函数之前
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);   // high可以改为1；
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
