const int i;
const int ldrPin = A0;
void setup() {
Serial.begin(9600);
for(int i=6;i<=10;i++)
pinMode(i, OUTPUT);
pinMode(A0, INPUT);
}
void loop() {
int ldrStatus = analogRead(ldrPin);
if (ldrStatus >=300) {
for(int i=6;i<=10;i++)
digitalWrite(i, HIGH);
}
else {
for(int i=6;i<=10;i++)
digitalWrite(i, LOW);
}
}

