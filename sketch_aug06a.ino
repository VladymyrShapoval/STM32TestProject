#include<Servo.h>                                                      

int servoPin = PA0;                               
int potPin = PA5;                                   
int greenPin = PA4;
int redPin = PA3;

Servo servo;                                           

void setup()                            
{                                                            
  servo.attach(servoPin);  
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop()
{
   digitalWrite(redPin, LOW);
   digitalWrite(greenPin, LOW);
 
   int angle;                                                                  
   int reading;                                                                
   int zero;
   
   reading = analogRead(potPin);                                               
   angle = (reading/24);                                                       
   
   if(reading > 3300) 
   {
   digitalWrite(redPin, HIGH);
   }
   else 
   {
    digitalWrite(redPin, LOW);
   }
  
   if(reading < 500) 
   {
   digitalWrite(greenPin, HIGH);
   }
   else 
   {
    digitalWrite(greenPin, LOW);
   }
   
   servo.write(angle);                                                                                                           
   delay(100);                                                     
} 
