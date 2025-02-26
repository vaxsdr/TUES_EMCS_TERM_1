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
  analogWrite(PIN_RED, 230);    // Red at full brightness
  analogWrite(PIN_GREEN, 0);    // Green off
  analogWrite(PIN_BLUE, 255);   // Blue at full brightness
  delay(500);

  // Pink (More red, less blue)
  analogWrite(PIN_RED, 255);    // Red at full brightness
  analogWrite(PIN_GREEN, 0);    // Green off
  analogWrite(PIN_BLUE, 30);   // Blue at a lower brightness
  delay(500);

  // Dark Blue (Only Blue)
  analogWrite(PIN_RED, 0);      // Red off
  analogWrite(PIN_GREEN, 0);    // Green off
  analogWrite(PIN_BLUE, 100);   // Dark blue (low brightness)
  delay(500);

  analogWrite(PIN_RED, 0);      // Red off
  analogWrite(PIN_GREEN, 255);    // Green off
  analogWrite(PIN_BLUE, 0);   // Dark blue (low brightness)
  delay(500);

  // Julto
  analogWrite(PIN_RED, 255);    // Red at full brightness
  analogWrite(PIN_GREEN, 50);  // Green at full brightness
  analogWrite(PIN_BLUE, 0);   // Blue at full brightness
  delay(500);

// svetlo rozovo
  analogWrite(PIN_RED, 255);    // Red at full brightness
  analogWrite(PIN_GREEN, 20);  // Green at full brightness
  analogWrite(PIN_BLUE, 30);   // Blue at full brightness
  delay(500);

// cinyo??????
   analogWrite(PIN_RED, 0);    // Red at full brightness
  analogWrite(PIN_GREEN, 255);  // Green at full brightness
  analogWrite(PIN_BLUE, 150);   // Blue at full brightness
  delay(500);


}
