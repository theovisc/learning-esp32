const int buttonPin = 4;
int counter = 0;
int state = 0;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLDOWN);
  Serial.println("--- ESP32 pret ! ---");
}

void loop() {
  if(digitalRead(buttonPin) == HIGH && state == 0 ){
    counter++;
    Serial.printf("You pressed %d times the button\n", counter);
  }

  state = digitalRead(buttonPin);
  delay(50);
}
