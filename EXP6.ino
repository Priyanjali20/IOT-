const int switchPin = 1;             // Connect the switch to digital pin 1
const int ledPins[] = {6, 7, 8, 9};  // Connect LEDs to digital pins 3 to 6
int count = 0;
void setup() {
  pinMode(switchPin, INPUT);
  for (int i = 6; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
void loop() {
  if (digitalRead(switchPin) == HIGH) {
    delay(50);  // Debounce the switch
    count = (count + 1) % 16;
    // Display the count using LEDs
    for (int i = 6; i < 10; i++) {
      digitalWrite(ledPins[i], bitRead(count, i));
    }
   while (digitalRead(switchPin) == HIGH) {
      // Wait until the switch is released
    }
  }
}