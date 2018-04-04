#include <NewPing.h>
NewPing sonar(12, 11, 200);
 
void setup() 
{
    Serial.begin(9600);
    delay(1000);
    Serial.println("AT+NAMESmartCane");
    pinMode(3,OUTPUT);
}
 
void loop() 
{
    delay(1000);
    int distance = sonar.ping_median() / US_ROUNDTRIP_CM;
    Serial.print("Distancia: ");
    Serial.print(distance);
    Serial.println("cm");
    
    if(distance<5)
    {
      analogWrite(3,20);
      delay(100);
      analogWrite(3,0);
    }
}
