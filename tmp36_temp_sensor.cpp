int sensorPin = A0;
double sensorInput;
double tempreture;
double max=0;
double min=100;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorInput = analogRead(sensorPin);
  tempreture = sensorInput / 1024;
  tempreture = tempreture * 5;
  tempreture = tempreture - 0.5;
  tempreture = tempreture * 100;
  Serial.print("Tempreture in Degree Celsius : ");
  Serial.println(tempreture);
  tempreture=(((tempreture*9)/5)+32);
  Serial.print("Tempreture in Fahrenheit : ");
  Serial.println(tempreture);
  if(max<tempreture)
  {
    Serial.print("Max Tempreture : ");
    Serial.println(tempreture);
  }
  if(min>tempreture)
  {
    Serial.print("Min Tempreture : ");
    Serial.println(tempreture);
  }
  
  delay(10000);
}
