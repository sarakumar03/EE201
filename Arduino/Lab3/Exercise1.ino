void setup() {
 pinMode(13, OUTPUT); // pin 13 will be used
}


void loop() {
 digitalWrite(13, HIGH); // turns light on
 delay(1000); // delay 1 second
 digitalWrite(13, LOW); // turns light off
 delay(1000); // delay 1 second
}
