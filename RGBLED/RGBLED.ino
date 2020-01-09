#define BLUE 2
#define GREEN 3
#define RED 4

void setup() {
pinMode(RED, OUTPUT); 
pinMode(GREEN, OUTPUT); 
pinMode(BLUE, OUTPUT); 

}


void loop(){
digitalWrite(RED, HIGH);
delay(00); 
digitalWrite(RED, LOW);
delay(500); 
digitalWrite(GREEN, HIGH);
delay(500); 
digitalWrite(GREEN, LOW);
delay(500); 
digitalWrite(BLUE, HIGH);
delay(500); 
digitalWrite(BLUE, LOW);
delay(500); 
digitalWrite(GREEN, HIGH);
digitalWrite(BLUE, HIGH); 
delay(1000); 
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
delay(1000); 
}


/*Se puede controlar el brillo de cada led con valores del 1 al 225 
 * redValue = 225; 
 * blueValue = 0; 
 * greenvalue = 0; 
 * Esta función después llama a analog write
 * 
 */
