const int ledPin = 8;
const int switchPin1 = 3;
const int switchPin2 = 5;
const int val1,val2 =0;
void setup() {
  Serial.begin(9600);
  // initialize digital pin  as an output or input.
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin1,INPUT);
  pinMode(switchPin2,INPUT);
}
void loop() {
  int val1 = digitalRead(switchPin1);
  if( val1 == 0){
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
  int val2 = digitalRead(switchPin2);
  if(val2 == 0){
  digitalWrite(ledPin, HIGH);       // turn the LED on (HIGH is the voltage level)
  delay(200);                      // wait for a second
  digitalWrite(ledPin, LOW);      // turn the LED off by making the voltage LOW
  delay(200);                     // wait for a second
}  
}
