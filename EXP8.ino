void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key;
  if(Serial.available()>0)
  key = Serial.read();
  switch(key){
    case '1':
      digitalWrite(6,HIGH);
      break;
      
    case '2':
      digitalWrite(6,LOW);
      break;

    case '3':
      digitalWrite(7,HIGH);
      break;
      
    case '4':
      digitalWrite(7,LOW);
      break;

    case '5':
      digitalWrite(8,HIGH);
      break;
      
    case '6':
      digitalWrite(8,LOW);
      break;

    case '7':
      digitalWrite(9,HIGH);
      break;
      
    case '8':
      digitalWrite(9,LOW);
      break;

    case '9':
      digitalWrite(10,HIGH);
      break;
      
    case 'a':
      digitalWrite(10,LOW);
      break;
    
    
  }
}

