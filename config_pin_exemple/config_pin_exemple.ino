void setup() {
// Pino 12 = PB6
// Pino 12 ATmega2560 como saída em nível alto, DDB6 = 1 e PORTB6 = 1
// É possível configurar
//  DDRB = DDRB | (1<<DDB6); // DDB6 = 1 , saída
//  PORTB = PORTB | (1<<PB6); // PORTB6 = 1 , NÍVEL ALTO


// ========================= //
// Pino 12 PB6 como saída em nível baixo, DDB6 = 1 e PORTB6 = 0 
// DDRB = DDRB | (1<<DDB6); // DDB6 = 1 , saída
// PORTB = PORTB & ~ (1<<PB6); // PORTB6 = 0, nível baixo


// =========================== // 
// Pino 12 PB6 como entrada com Pull-Up DDB6=0 e PORTB6 = 1
DDRB = DDRB & ~ (1<<DDB6); // DDB6=0 entrada
PORTB = PORTB | (1<<PB6); // PORTB6 = 1 , com PULL-UP


}

void loop() {
  
}
