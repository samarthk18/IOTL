int no;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  while(Serial.available()==0){}
  no=Serial.parseInt();
  Serial.println("\nEntered number is ");
  Serial.print(no);
  Serial.println("\nSquare of the number is ");
  Serial.print(sq(no));
               }
