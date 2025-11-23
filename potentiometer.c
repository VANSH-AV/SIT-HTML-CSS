// C++ code

int LED = 9;
int LED1 = 7;
int P = A0;
int pr = 0;
int Brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  pr = analogRead(P);
  Serial.println(pr);

  Brightness = pr / 6;

  analogWrite(LED, Brightness);

  if (pr < 511) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  delay(50);
}
