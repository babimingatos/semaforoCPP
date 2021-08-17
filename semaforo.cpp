// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  delay(6000);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, LOW);
  delay(6000); 
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(0, LOW);
  delay(6000); 
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(0, LOW);
  delay(6000); 
}
