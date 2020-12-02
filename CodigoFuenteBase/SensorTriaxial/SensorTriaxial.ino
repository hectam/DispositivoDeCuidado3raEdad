void setup(){
Serial.begin(9600);
}

void loop(){

 xA = analogRead(A0);
 yA = analogRead(A1);
 zA = analogRead(A2);

 Serial.print(xA);
 Serial.print(",");
 Serial.print(yA);
 Serial.print(",");
 Serial.print(zA);
 delay(20);

}
