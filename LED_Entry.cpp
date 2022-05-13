int R = 11;
int G = 12;
int B =13;
char input;
void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available()==0){}
 input=Serial.read();
  if(input=='G'||input=='g')
  {
    digitalWrite(G,HIGH);
    digitalWrite(R,LOW);
    digitalWrite(B,LOW);
    delay(100);
  }
  else if(input=='R'||input=='r')
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
    delay(100);
  }
  else if(input=='B'||input=='b')
  {
    digitalWrite(B,HIGH);
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    delay(100);
  }
  else
  {
    Serial.println("Invalid");
  }
 
}
