byte hoparlorPin = 9;
byte ledPin = 3;

void setup() {
  pinMode(hoparlorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void kendiSesimiz(long periyot, long sure) {
  long dalga = periyot / 2;
  for (long i = 0; i < sure * 1000L; i += periyot) {
    digitalWrite(hoparlorPin, HIGH);
    digitalWrite(ledPin, HIGH); 
    delayMicroseconds(dalga);
    digitalWrite(hoparlorPin, LOW);
    digitalWrite(ledPin, LOW); 
    delayMicroseconds(dalga);
  }
}

void loop() {
  for (long i = 15000; i >= 500; i = i / 2) {
    kendiSesimiz(i, 200);
  }
}
