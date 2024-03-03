// the setup function runs once when you press reset or power the board
int i;
int switch1 = 1;
int switch2 = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(i=6;i<=10;i++)
  pinMode(i, OUTPUT);
  pinMode(1,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  if(digitalRead(switch1) == LOW){
  for(i=6;i<=9;i++){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);  
  digitalWrite(i,LOW); // turn the LED off by making the voltage LOW
  delay(500);            // wait for a second
  }
  }
  else if(digitalRead(switch2) == LOW){
   for(i=9;i>=6;i--){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);  
  digitalWrite(i,LOW);   // turn the LED off by making the voltage LOW
  delay(500);                   // wait for a second
  }
  }
  else
  digitalWrite(i,LOW);
}