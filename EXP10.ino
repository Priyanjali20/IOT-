const int ldrPin = A0;  // Photoresistor connected to analog pin A0
const int ledPin = 3;    // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int brightness = analogRead(ldrPin);
  int blinkSpeed = map(brightness, 0, 1023, 100, 1000);  //range 

  digitalWrite(ledPin, HIGH);
  delay(blinkSpeed);
  digitalWrite(ledPin, LOW);
  delay(blinkSpeed);
  Serial.print("Brightness: ");
  Serial.println(brightness);
  delay(500);  
}