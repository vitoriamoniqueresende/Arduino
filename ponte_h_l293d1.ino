void setup()
{
  pinMode(4, OUTPUT);  // para trás
  pinMode(5, OUTPUT);  // para frente
  pinMode(6, OUTPUT);  // aciona o motor
}

void loop()
{
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);  
  digitalWrite(4, LOW);
  
  delay(5000);
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);  
  digitalWrite(4, LOW);
  
  delay(2000);
  
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);  
  digitalWrite(4, HIGH);
  
  delay(5000);
  
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);  
  digitalWrite(4, LOW);
  
  delay(2000);
    
}