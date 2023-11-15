// PB7, PB6, DB3 etc definidos pelo arduino 

unsigned char i; // só positivo

// Saídas altas + pull-up 
PORTB = (1<<PB7) | (1<<PB6) | (1<<PB3) | (1<<PB3); // PORTB = CCh

// Definir direção de pinos 
DDRB = (1<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0); // DDRB = 0Fh

__no_operation(); // nop para sincronização

i = PINB; // ler porta
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
