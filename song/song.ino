int buzzer = 3;

void setup() {
   pinMode(buzzer, OUTPUT);
   Serial.begin(9600);
}

void loop() {
   unsigned char s;
 

   //output an frequency
   for(s=0;s<7;s++)
   {
    digitalWrite(buzzer,HIGH);
    delay(100);//wait for 1ms
    digitalWrite(buzzer,LOW);
    delay(100);//wait for 1ms
    }
    while(1){
      
    }
}
