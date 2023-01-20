void setup() {
  // choosing which pins are being used
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // Countdown from 9 
  // 9 
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, LOW); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);


  // 8 (all on) 
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, LOW); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 7
  digitalWrite(3, HIGH); // e
  digitalWrite(4, HIGH); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, HIGH); // g
  digitalWrite(7, HIGH); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 6
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, LOW); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, HIGH); // b
  delay(1500);

  // 5
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, LOW); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, HIGH); // b
  delay(1500);

  // 4
  digitalWrite(3, HIGH); // e
  digitalWrite(4, HIGH); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, LOW); // f 
  digitalWrite(8, HIGH); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 3
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, HIGH); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 2 
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, HIGH); // c
  digitalWrite(6, LOW); // g
  digitalWrite(7, HIGH); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 1
  digitalWrite(3, HIGH); // e
  digitalWrite(4, HIGH); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, HIGH); // g
  digitalWrite(7, HIGH); // f
  digitalWrite(8, HIGH); // a
  digitalWrite(9, LOW); // b
  delay(1500);

  // 0
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // d
  digitalWrite(5, LOW); // c
  digitalWrite(6, HIGH); // g
  digitalWrite(7, LOW); // f
  digitalWrite(8, LOW); // a
  digitalWrite(9, LOW); // b
  delay(1500);
}
