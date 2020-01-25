
void setup() {
  
  Serial.begin(9600);
  Serial1.begin(9600);
  delay(5000);
  Serial.println("¡Bienvenido uFox!");
  Serial.println("escribe un comando AT");
}

void loop() {
   while (Serial.available()) {
    Serial1.write(Serial.read());
  }
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
}
