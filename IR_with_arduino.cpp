int led = 13;
int out = A2;
int sensorRead;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(out, INPUT);
}

void loop()
{
  sensorRead = digitalRead(out);
  Serial.println(sensorRead);
  
  if (sensorRead == 1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
  delay(500);
}
