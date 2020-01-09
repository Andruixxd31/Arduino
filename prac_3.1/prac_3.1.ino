void setup() {
  pinMode (13, INPUT);
  pinMode (7,OUTPUT);
  Serial.begin (9600);

}

void loop() {
  bool int1;
  int1=digitalRead(13);

  if(int1== HIGH){
    digitalWrite(7,HIGH);
    Serial.print(int1);
    delay(500);
  }
  else{
    digitalWrite(7,LOW);
    Serial.print(int1);
    delay(500);
  }

}
