#include <IRremote.h>

 IRsend irsend;
 void setup()
 {
   Serial.begin(9600);
 }
int k=16;
 void loop() 
 {        
    if(k==0){k=17;}                                                    //摆风 0x6B94E01F          
    if(k==16){Serial.println("if 语句有用");k=k+1;}                 // 关闭 0x7B84E01F                                                    
    if(k==17)                                                         // 强劲 0xF50AA25D
       {                                                               // 清新 0xF50AA35C
            irsend.sendMIDEA(0x1FE008F7, 32); //需要发2次美的空调      //数显 0xF50AA55A                               
            irsend.sendMIDEA(0x1FE008F7, 32);                         // 风向 0x1FE044BB
            Serial.println("17");
            delay(2000);
            k=k+1;              
       }                                                                 //  17度 0x1FE008F7
                                                                        //  18度 0x1FE018E7
  if(k==18)                                                             // 19度 0x1FE038C7
      {                                                                 // 20度 0x1FE028D7
           irsend.sendMIDEA(0x1FE018E7, 32); //需要发2次美的空调       // 21度 0x1FE06897                          
           irsend.sendMIDEA(0x1FE018E7, 32);                          //  22度 0x1FE07887
           Serial.println("18");                                   // 23度 0x1FE058A7
           delay(2000);
           k=k+1;     
         
      }                                                               //24度 0x1FE048B7
                                                                      //25度 0x1FE0C837
  if(k==19)                                                           // 26度 0x1FE0D827
      {                                                               //27度 0x1FE09867
            irsend.sendMIDEA(0x1FE038C7, 32); //需要发2次美的空调    // 28度 0x1FE08877                             
            irsend.sendMIDEA(0x1FE038C7, 32);                         // 29度 0x1FE0A857
            Serial.println("19");
            delay(2000);
            k=k+1;                                              // 30度 0x1FE0B847
            
      }
      
  if(k==20)
      {
            irsend.sendMIDEA(0x1FE028D7, 32); //需要发2次美的空调                                     
             irsend.sendMIDEA(0x1FE028D7, 32);
             Serial.println("20"); 
            delay(2000);
           k=k+1;
      }
      
   if(k==21)
      {
             irsend.sendMIDEA(0x1FE06897, 32); //需要发2次美的空调                                     
              irsend.sendMIDEA(0x1FE06897, 32); 
             Serial.println("21");
             delay(2000);  
             k=k+1;
      }
      
   if(k==22)
      {
             irsend.sendMIDEA(0x1FE07887, 32); //需要发2次美的空调                                     
            irsend.sendMIDEA(0x1FE07887, 32); 
             delay(2000);
             Serial.println("22");
             k=k+1;
      }
      
   if(k==23)
      {
          irsend.sendMIDEA(0x1FE058A7, 32); //需要发2次美的空调                                     
          irsend.sendMIDEA(0x1FE058A7, 32); 
          delay(2000);
          Serial.println("23");
          k=k+1;
      }
      
  if(k==24)
      {
           irsend.sendMIDEA(0x1FE048B7, 32); //需要发2次美的空调                                     
           irsend.sendMIDEA(0x1FE048B7, 32); 
           delay(2000);
           Serial.println("24");
           k=k+1;
      }
      
   if(k==25)
      {
            irsend.sendMIDEA(0x1FE0C837, 32); //需要发2次美的空调                                     
             irsend.sendMIDEA(0x1FE0C837, 32); 
             delay(2000);
             Serial.println("25");
             k=k+1;
      }
      
  if(k==26)
      {
           irsend.sendMIDEA(0x1FE0D827, 32); //需要发2次美的空调                                     
          irsend.sendMIDEA(0x1FE0D827, 32); 
          delay(2000);
          Serial.println("26");
          k=k+1;
      }
      
  if(k==27)
      {
           irsend.sendMIDEA(0x1FE09867, 32); //需要发2次美的空调                                     
           irsend.sendMIDEA(0x1FE09867, 32); 
           delay(2000);
           Serial.println("27");
           k=k+1;
      }
      
  if(k=28)
      {
            irsend.sendMIDEA(0x1FE08877, 32); //需要发2次美的空调                                     
            irsend.sendMIDEA(0x1FE08877, 32); 
           delay(2000);
           Serial.println("28");
           k=k+1;
      }
      
   if(k==29)
      {
         irsend.sendMIDEA(0x1FE0A857, 32); //需要发2次美的空调                                     
         irsend.sendMIDEA(0x1FE0A857, 32); 
          delay(2000);
          Serial.println("29");
          k=k+1;
      }
      
  if(k==30)
      {
           irsend.sendMIDEA(0x1FE0B847, 32); //需要发2次美的空调                                     
            irsend.sendMIDEA(0x1FE0B847, 32); 
           delay(2000);
           Serial.println("30");
           k=0;
      }
      if(k==0)
      {
           irsend.sendMIDEA(0x7B84E01F, 32); //需要发2次美的空调                                     
            irsend.sendMIDEA(0x7B84E01F, 32); 
           delay(2000);
           Serial.println("guan");
        
      }
      
}

