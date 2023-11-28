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
// DDRB = DDRB & ~ (1<<DDB6); // DDB6=0 entrada
// PORTB = PORTB | (1<<PB6); // PORTB6 = 1 , com PULL-UP

// ================================ //

// Pino 12 PB6 ( pino B bit 6 ) como entrada sem pull-up ( alta impedância )
// DDB6 = 0 e PORTB6 = 0
// com Pull up fica sempre HIGH em um button e quando pressionado fica LOW
// É bom para evitar falsas leituras
// Reduz consumo de energia
// Melhora a integridade do sinal ajudando a estabilizar a voltagem
// Evita valores flutuantes, ex : flutuar entre HIGH e LOW

DDRB = DDRB & ~ (1<<DDB6); // DDB6 = 0 , entrada
PORTB = PORTB & ~ (1<<PB6); // PORTB6 = 0, sem pull - up
}

void loop() {
  
}
