void setup() 
{
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int i;
  for(i=3;i<=7;i++)
  {
    if(i==5)
digitalWrite(i, HIGH);
delay(1000);
digitalWrite(i, LOW);
delay(1000);
}
}
