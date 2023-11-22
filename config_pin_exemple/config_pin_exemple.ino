void setup() {
  // Pino 12 = PB6
  // Pino 12 ATmega2560 como saída em nível alto, DDB6 = 1 e PORTB6 = 1
  // É possível configurar
 DDRB = DDRB | (1<<DDB6); // DDB6 = 1 , saída
 PORTB = PORTB | (1<<PB6); // PORTB6 = 1 , NÍVEL ALTO
}

void loop() {
  
}
