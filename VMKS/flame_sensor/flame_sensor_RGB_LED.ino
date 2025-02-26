const int PIN_BLUE = 9;
const int PIN_RED = 10;
const int PIN_GREEN = 11;
const int FLAME_SENSOR_PIN_DO = 2;

void setup() {
  pinMode(PIN_BLUE, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(FLAME_SENSOR_PIN_DO, INPUT);
}

void loop() {
  int flameDigitalValue = digitalRead(FLAME_SENSOR_PIN_DO); // Четене на дигиталната стойност

  if (flameDigitalValue != HIGH) { // Пламък открит
    analogWrite(PIN_RED, 255);    
    analogWrite(PIN_GREEN, 0);    
    analogWrite(PIN_BLUE, 0);     
  } else { // Няма пламък
    analogWrite(PIN_RED, 10);      
    analogWrite(PIN_GREEN, 255);  
    analogWrite(PIN_BLUE, 0);     
  }

  delay(500); // Изчакване половин секунда
}

