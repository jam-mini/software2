const int ledPin = 7; 
int blinkCount = 0;    

void setup() {
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, 1); 
}

void loop() {
  
  digitalWrite(ledPin, 0);
  delay(1000);

  
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, 1); 
    delay(100); // 0.5초 대기
    digitalWrite(ledPin, 0); 
    delay(100); // 0.5초 대기
  }

  
  digitalWrite(ledPin, 1);

  
  while (1) {
    
  }
}


