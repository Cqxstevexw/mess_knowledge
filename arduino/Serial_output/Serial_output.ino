int counter = 0;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

counter = counter+1;
Serial.print(counter);    //Serial.print和Serial.println的区别就是后者多了一个换行符
Serial.print(':');
Serial.print("Hello World\n");
delay(1000);
}
