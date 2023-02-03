int den1 = 2;
int den2 = 3;
int den3 = 4;
int den4 = 5;
int den5 = 6;

void setup() {
  pinMode(den1, OUTPUT);
  pinMode(den2, OUTPUT);
  pinMode(den3, OUTPUT);
  pinMode(den4, OUTPUT);
  pinMode(den5, OUTPUT);

  digitalWrite(den1, LOW);
  digitalWrite(den2, LOW);
  digitalWrite(den3, LOW);
  digitalWrite(den4, LOW);
  digitalWrite(den5, LOW);

  Serial.begin(9600);
}

void loop() {

  byte incomingByte;

  switch(incomingByte) {
    case '1':
      incomingByte = Serial.read();
      digitalRead(den1);
      digitalWrite(den1, HIGH);
      Serial.println("Den 1 sang");
      delay(500);
      break;

    case '2':
      incomingByte = Serial.read();
      digitalRead(den2);
      digitalWrite(den2, HIGH);
      Serial.println("Den 2 sang");
      delay(500);
      break;

    case '3':
      incomingByte = Serial.read();
      digitalRead(den3);
      digitalWrite(den3, HIGH);
      Serial.println("Den 3 sang");
      delay(500);
      break;

    case '4':
      incomingByte = Serial.read();
      digitalRead(den4);
      digitalWrite(den4, HIGH);
      Serial.println("Den 4 sang");
      delay(500);
      break;

    case '5':
      incomingByte = Serial.read();
      digitalRead(den5);
      digitalWrite(den5, HIGH);
      Serial.println("Den 5 sang");
      delay(500);
      break;
  }

}
