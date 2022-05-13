 int R =11;
 int G =12;
 int B =13;
 int counter=0;
void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  change();
}
void change()
{
 
  if(counter<100)
  {
    digitalWrite(G,HIGH);
    digitalWrite(R,LOW);
    digitalWrite(B,LOW);
    delay(100);
  }
  if(counter>100 && counter<200)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
    delay(100);
  }
  if(counter>200)
  {
    digitalWrite(B,HIGH);
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    delay(100);
  }
  counter=counter+1;
  if(counter>300)
  {
    counter=0;
  }
}
