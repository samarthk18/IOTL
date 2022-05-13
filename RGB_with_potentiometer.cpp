int R=7;
int G=8;
int B=9;

int val1=0;
int val2=0;
int val3=0;

int input1=A0;
int input2=A1;
int input3=A2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val1=analog.Read()=input1;
  val2=analog.Read()=input2;
  val3=analog.Read()=input3;
  
  analogWrite(R,value0/4);
  analogWrite(G,value1/4);
  analogWrite(B,value2/4);
  delay(100);
  
}
