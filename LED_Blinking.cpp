void setup()
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 500 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000); // Wait for 500 millisecond(s)
  
  int i;
  for(i=0;i<3;i++)
  {
  digitalWrite(4, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  }
  
  for(i=0;i<5;i++)
  {
  digitalWrite(3, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, LOW);
  delay(500); // Wait for 500 millisecond(s)
  }
}
