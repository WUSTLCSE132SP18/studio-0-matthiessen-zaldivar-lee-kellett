void setup(){
  Serial.begin(9600);
  pinMode(13, LOW);
}

void loop(){
  digitalWrite(13, HIGH);       // sets the digital pin 13 on
  delay(500);                  // waits for a second
  digitalWrite(13, LOW);        // sets the digital pin 13 off
  delay(500); 
  int time = millis()/1000;
  Serial.print(time);
  Serial.println(" sec have elapsed");
}

