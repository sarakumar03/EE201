int val = 0; // initialize low
void setup() {
 Serial.begin(9600);
 pinMode(13, INPUT); // pin 13 will be used
}


void loop() {
 val = digitalRead(13); // set value to the digital read of 13
 if(val == 1) { // when high
   Serial.println("Hello World!");
   delay(1000);
 } else if(val == 0) { // when low
   Serial.println("It's 2023");
   delay(1000);
 }
}
