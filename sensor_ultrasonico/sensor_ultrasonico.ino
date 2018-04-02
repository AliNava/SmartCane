#include <NewPing.h>
NewPing sonar(12, 11, 200);
 
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
 
void loop() {
  delay(1000);
  int distance = sonar.ping_median()/US_ROUNDTRIP_CM;
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println("cm");
  if(distance<5){
    analogWrite(13,20);
    delay(100);
    analogWrite(13,0);
    }
}
