byte hoparlorPin = 9; 
byte ledPin = 3;     

void setup() {
  pinMode(hoparlorPin, OUTPUT);
}

// Zamanlayıcı kullanmayan kendi ses fonksiyonumuz
void kendiSesimiz(int periyot, int sure) {
  int dalga = periyot / 2; 
  for (long i = 0; i < sure * 1000L; i += periyot) {
    digitalWrite(hoparlorPin, HIGH);  
    delayMicroseconds(dalga);        
    digitalWrite(hoparlorPin, LOW);   
    delayMicroseconds(dalga);        
  }
}

void loop() {
  // Sesi çal (Kalından inceye doğru)
  for(int i = 15000; i >= 500; i = i / 2) {
    kendiSesimiz(i, 200); 
  }
}
