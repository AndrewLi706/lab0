int data = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    data = Serial.read();
    Serial.write(data);
  }
  
  if(Serial.read() ==1){
      digitalWrite(pin 13, HIGH);
      delay(1000);
  }else{
      digitalWrite(pin 13, LOW);
      delay(1000);
   
    
    }
}
