void setup() {
 pinMode(13, OUTPUT); // pin 13 will be used
 pinMode(10, OUTPUT); // pin 10 will be used
}


void loop() {
// when one bulb is bright the other is not 
 digitalWrite(13, HIGH); 
 digitalWrite(10,LOW);
 delay(1000); // delay for a second
 // then they switch
 digitalWrite(13, LOW);
 digitalWrite(10,HIGH);
 delay(1000); // delay for a second
}
