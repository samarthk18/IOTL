int sensoroutput = A4; // the analog pin connected to the sensor
int ledoutput = 12; // pin connected to LED
int THRESHOLD = 1000;
void setup()
{
pinMode(ledoutput, OUTPUT);   // this function is used to declare led connected pin as output
}
void loop()
{
int value = analogRead(sensoroutput);  // function to read analog voltage from sensor
if (value >= THRESHOLD)                    // function to check voltage level from sensor
{
digitalWrite(ledoutput, HIGH);
delay(100); // to make the LED visible
}
else
digitalWrite(ledoutput, LOW);
}
