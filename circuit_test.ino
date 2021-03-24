int softpotPin0 = A0; //analog pin 0
int softpotPin1 = A1; //analog pin 1
int softpotPin2 = A2; //analog pin 2

int PIN_BUTTON_RIGHT = 15;
int PIN_BUTTON_UP = 14;
int PIN_BUTTON_DOWN = 16;
int PIN_BUTTON_LEFT = 10;
int PIN_ANALOG_X = A3;
int PIN_ANALOG_Y = A9;
int PIN_BUTTON_SELECT = 7;

int PIEZO_PIN6 = A6;
int PIEZO_PIN7 = A7;
int PIEZO_PIN8 = A8;
int PIN_BUTTON_YELLOW = 2;
int PIN_BUTTON_RED = 3;
int PIN_BUTTON_BLUE = 5;

void setup(){
//  digitalWrite(softpotPin0, HIGH); //enable pullup resistor
//  digitalWrite(softpotPin1, HIGH); //enable pullup resistor
//  digitalWrite(softpotPin2, HIGH); //enable pullup resistor
//  
//  pinMode(PIN_BUTTON_RIGHT, INPUT);  
//  digitalWrite(PIN_BUTTON_RIGHT, HIGH);
//  pinMode(PIN_BUTTON_LEFT, INPUT);  
//  digitalWrite(PIN_BUTTON_LEFT, HIGH);
//  pinMode(PIN_BUTTON_UP, INPUT);  
//  digitalWrite(PIN_BUTTON_UP, HIGH);
//  pinMode(PIN_BUTTON_DOWN, INPUT);  
//  digitalWrite(PIN_BUTTON_DOWN, HIGH);
//  pinMode(PIN_BUTTON_SELECT, INPUT);  
//  digitalWrite(PIN_BUTTON_SELECT, HIGH);
//
//  pinMode(PIEZO_PIN6, INPUT);
//  pinMode(PIEZO_PIN7, INPUT);
//  pinMode(PIEZO_PIN8, INPUT);
  pinMode(PIN_BUTTON_YELLOW,INPUT);
  digitalWrite(PIN_BUTTON_YELLOW,HIGH);
  
  pinMode(PIN_BUTTON_RED,INPUT);
  digitalWrite(PIN_BUTTON_RED,HIGH);
  
  pinMode(PIN_BUTTON_BLUE,INPUT);
  digitalWrite(PIN_BUTTON_BLUE,HIGH);
  
  Serial.begin(9600);
}

void loop(){
  
//  int softpotReading0 = analogRead(softpotPin0); 
//  int softpotReading1 = analogRead(softpotPin1);
//  int softpotReading2 = analogRead(softpotPin2);
//  Serial.print("softpotReading0:");
//  Serial.print(softpotReading0);
//  Serial.print(" ");  
//  Serial.print("  softpotReading1:");
//  Serial.print(softpotReading1);
//  Serial.print(" ");  
//  Serial.print("  softpotReading2:");
//  Serial.println(softpotReading2);
//
//  Serial.print("l:"); 
//  Serial.print(digitalRead(PIN_BUTTON_LEFT));
//  Serial.print("  r:");
//  Serial.print(digitalRead(PIN_BUTTON_RIGHT));
//  Serial.print("  u:");
//  Serial.print(digitalRead(PIN_BUTTON_UP));
//  Serial.print("  d:"); 
//  Serial.print(digitalRead(PIN_BUTTON_DOWN));
//  Serial.print("  x:");
//  Serial.print(analogRead(PIN_ANALOG_X));
//  Serial.print("  y:");
//  Serial.print(analogRead(PIN_ANALOG_Y));
//  Serial.print("  s:");
//  Serial.println(digitalRead(PIN_BUTTON_SELECT));
//  
//  Serial.print("pizeo 6 : ");
//  Serial.print(analogRead(PIEZO_PIN6));
//  Serial.print("  pizeo 7 : ");
//  Serial.print(analogRead(PIEZO_PIN7));
//  Serial.print("  pizeo 8 : ");
//  Serial.println(analogRead(PIEZO_PIN8));
  Serial.print(digitalRead(PIN_BUTTON_YELLOW));
  Serial.print("  ");
  Serial.print(digitalRead(PIN_BUTTON_RED));
  Serial.print("  ");
  Serial.print(digitalRead(PIN_BUTTON_BLUE));
  Serial.print("  ");
  Serial.println();
}
