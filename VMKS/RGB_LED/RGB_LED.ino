const int PIN_BLUE = 9;
const int PIN_RED = 10;
const int PIN_GREEN = 11;

int red;
int green;
int blue;

void setup() {

  pinMode (PIN_BLUE, OUTPUT);
  pinMode (PIN_RED, OUTPUT);
  pinMode (PIN_GREEN, OUTPUT);

}

void loop() {
  // Purple (Red + Blue)
  analogWrite(PIN_RED, 230);     
  analogWrite(PIN_GREEN, 0);    
  analogWrite(PIN_BLUE, 255);   
  delay(500);

  // Rozovo
  analogWrite(PIN_RED, 255);    // Red at full brightness
  analogWrite(PIN_GREEN, 0);    // Green off
  analogWrite(PIN_BLUE, 30);   // Blue at a lower brightness
  delay(500);

  // Dark Blue 
  analogWrite(PIN_RED, 0);      
  analogWrite(PIN_GREEN, 0);    
  analogWrite(PIN_BLUE, 100);   // za da stane Dark blue trqbva da e na low brightness
  delay(500);

  // zeleno za da vidq razlikata s jultoto
  analogWrite(PIN_RED, 0);     
  analogWrite(PIN_GREEN, 255);  
  analogWrite(PIN_BLUE, 0);   
  delay(500);

  // Julto
  analogWrite(PIN_RED, 255); 
  analogWrite(PIN_GREEN, 50); 
  analogWrite(PIN_BLUE, 0); 
  delay(500);

// svetlo rozovo
  analogWrite(PIN_RED, 255);   
  analogWrite(PIN_GREEN, 20); 
  analogWrite(PIN_BLUE, 30); 
  delay(500);

// cinyo??????
   analogWrite(PIN_RED, 0);   
  analogWrite(PIN_GREEN, 255);  
  analogWrite(PIN_BLUE, 150);    
  delay(500);


}
