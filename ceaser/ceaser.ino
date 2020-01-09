    #define Nchars 96  //  starting at 32 up to 126 in the ascii table
#define n_shift 3  //  shift desired
//
char plaintext[]=
{
  "Arduino to cipher this#"};

char ciphered[sizeof(plaintext)];


boolean stringComplete = true;  // whether the string is complete

void setup() {
  // Insert your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  uint8_t i;
  //   Serial.println(sizeof(plaintext));
  //   Insert your main code here, to run repeatedly: 

  while(Serial)
  {
    if(stringComplete==true){
      Serial.println ("Arduino Caesar Cipher v1");
      Serial.println ("");
      cphr();
      Serial.println(" ");
    }
  }
}

void cphr()
{
  uint8_t sizeofarray = sizeof(plaintext);
  uint8_t i;
  //
  for(i=0;i<sizeofarray;i++)
  {
    uint16_t retrieved;
    retrieved=plaintext[i];
    if(retrieved == 0){
      ciphered[i]=0;
      Serial.print("i- ");
      Serial.println(i);
      Serial.println("null CHARACTER ");
      // The use of goto's is highly frowned upon...
      // ...but can be quite handy as well !
      goto bailout;
    }
    Serial.print("P original- - ");
    Serial.println(retrieved);
    //retrieved -=32; // Subract Ascii_offset
    Serial.print("P - Offset = ");
    Serial.println(retrieved-32);
    uint16_t c =((retrieved-32) + n_shift)% Nchars; // check blog post for more info on this   
    Serial.print("C original - ");
    Serial.println(c);
    c +=32; // add the Ascii_offset
    Serial.print("C + Offset = ");
    Serial.println(c);
    ciphered[i]=c;
    //
    Serial.println(" ");
    Serial.print("i- ");
    Serial.println(i);
    Serial.println(c);
    Serial.print("C_array- ");
    Serial.println(ciphered[i]);
    Serial.print("Alphaarray- ");
    Serial.println(plaintext[i]);
    delay(50);
  }
bailout://  :)
  displayResults();
  stringComplete = false;
}

void displayResults(){
  uint8_t i;
  uint8_t sizeofarray = sizeof(plaintext);
  Serial.print("plaintext to encipher- ");
  for(i=0;i<sizeofarray;i++)
  {
    Serial.print(plaintext[i]);
    delay(10);
  }
  Serial.println(" ");
  Serial.print("Ciphered_array- ");
  for(i=0;i<sizeofarray;i++)
  {
    Serial.print(ciphered[i]);
    delay(50);
  }
}
