int ldrPin=A0; 
int ldrValue = A0; 
int ledpin = 3; 
void setup() { 
	pinMode(3, OUTPUT); 
	Serial.begin(9600); 
  pinMode(A0,INPUT);
	// put your setup code here, to run once: 
} 
void loop() { 
	ldrValue = analogRead(A0); 
	Serial.println(ldrValue); 
	if(ldrValue < 100) 
	{ 
	  Serial.println("LED light on"); 
	  digitalWrite(3,HIGH); 
	  delay(1000); 
	} 
	digitalWrite(3,LOW); 
	delay(ldrValue); 
	
} 
