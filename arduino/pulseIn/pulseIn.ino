const int TrigPin = 2;          //需要一块超声波模块
const int EchoPin = 3;
float distance;

void setup() 
{
 Serial.begin(9600);
 pinMode(TrigPin,OUTPUT);
 pinMode(EchoPin,0);
 Serial.println("Ultrasonic sensor");
}

void loop()
{
//产生一个10us高搞脉冲去触发TrigPin
 digitalWrite(TrigPin,0);
 delayMicroseconds(2);
 digitalWrite(TrigPin,1);
 delayMicroseconds(10);
 digitalWrite(TrigPin,0);
 distance = pulseIn(EchoPin,1)/58.00;
 Serial.print(distance);
 Serial.println("cm");
 delay(1000);
}
