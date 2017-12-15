
int ledArray [7] = {13, 12, 11, 10, 9, 8, 7};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(ledArray[i], OUTPUT);
  }
}
void forward(int count) {
    for(int i = 0; i < count; i++) {
        digitalWrite(ledArray[i], HIGH); // turn led on
        delay(100);
        digitalWrite(ledArray[i], LOW); // turn led off
   }
}
void backward(int count) {
    for(int i = count; i >= 0; i--) {
        digitalWrite(ledArray[i], HIGH); // turn led on
        delay(100);
        digitalWrite(ledArray[i], LOW); // turn led off
   }
}

void loop() {
  forward(7);
  backward(6);
}
