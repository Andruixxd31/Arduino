
#include <Servo.h>

Servo myservo; 
int boton = 5;

int pos = 0;

void setup() {
  myservo.attach(9);
  pinMode(led, OUTPUT); 
  pinMode(boton, INPUT_PULLUP); 
}

void loop() {
  if (digitalRead(boton) == LOW){ //al ser apretado corre todo el loop
    for (pos = 0; pos <= 180; pos += 1) { 
 
      myservo.write(pos);              
      delay(15); 
     }
  }
  if (pos == 180){
    pos = 0;
    myservo.write(pos);
    delay(50);
  }
}
