#define m11 3

#define m21 5

void setup()
{
  pinMode(m11, OUTPUT);

  pinMode(m21, OUTPUT);
  
  Serial.begin(9600);
}
void loop()
{
  while(Serial.available())
  {
    char In=Serial.read();
    
    if(In=='2')            // Forward
    {
      digitalWrite(m11, HIGH);
      
      digitalWrite(m21, HIGH);
     
    }
    
   
    
     else if(In=='0')     // Left
    {
      digitalWrite(m11, HIGH);
    
      digitalWrite(m21, LOW);
      
    }
    
     else if(In=='1')     // Right
    {
      digitalWrite(m11, LOW);
   
      digitalWrite(m21, HIGH);
     
    }
    
     else if(In=='3')    // stop
    {
      digitalWrite(m11, LOW);
    
      digitalWrite(m21, LOW);
     
    }
    
    else
    {
      
    }
  }
}
