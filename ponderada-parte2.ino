void setup() {
  // Define o pino 11 como saída
  pinMode(11, OUTPUT);
  
  // Define o pino 12 como saída
  pinMode(12, OUTPUT);
  
  // Define o pino 13 como saída
  pinMode(13, OUTPUT);
}

void loop() {
  // Ativa o LED no pino 13 (HIGH) e desativa os LEDs nos pinos 12 e 11 (LOW)
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  // Espera 1 segundo
  delay(1000);

  // Desativa o LED no pino 13, ativa o LED no pino 12 e mantém o LED no pino 11 desligado
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);

  // Espera 1 segundo
  delay(1000);

  // Desativa os LEDs nos pinos 13 e 12, e ativa o LED no pino 11
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);

  // Espera 1 segundo
  delay(1000);
}