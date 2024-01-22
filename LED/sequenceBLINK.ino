// the setup function runs once when you press reset or power the board
int i;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(i=6;i<=10;i++)
  pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(i=6;i<=10;i++){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);  
  digitalWrite(i,LOW);   // turn the LED off by making the voltage LOW
  delay(500);                   // wait for a second
  }
}


