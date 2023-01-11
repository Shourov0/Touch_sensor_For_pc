int newcount ,count=0;

void setup() 
{ 
pinMode(16,INPUT); //TUCH SENSOR'S PIN
pinMode(12,OUTPUT); //SECOUND RELAY PIN
pinMode(13,OUTPUT); //THIRD RELAY PIN
//pinMode(14,OUTPUT); THIS IS THE FIRST RELAY PIN
}

void loop() 
{  
  
  if(digitalRead(16)==HIGH)
  {
  newcount=count+1;
     if(newcount!=count)
       {
        Serial.println(newcount);
        switch (newcount)
           {           
              case 1: digitalWrite(13,HIGH);
                      delay(10000);
                      break;
              case 2: digitalWrite(12,HIGH);
                      delay(10000);       //for 10second
                      break;                 
              default: digitalWrite(12,LOW);
                       digitalWrite(13,LOW);
                       newcount=0;
                       delay(10000);
                       break;
            }
       count=newcount;
       }
  }
  delay(100);
}
