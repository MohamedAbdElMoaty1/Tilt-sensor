
int tilt = 5 ; 
int motor = 3 ; 
int reading = 0 ; 
int value = 0 ; 

void setup()
{
  
  pinMode(tilt,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  reading = digitalRead(tilt);
  if(reading==HIGH)
  {
  
    digitalWrite(motor,HIGH);
  
  }

  else
  {
  
    digitalWrite(motor,LOW);
  }



}