void setup() {
  // put your setup code here, to run once:
  // Led built in do arduino do Pino 13 (PB7 no mega) piscando 
  DDRB = DDRB | (1<<DDB7); // DDB7 = 1 , saída
  PORTB = PORTB & ~ (1<<PB7); // PORTB7 = 0, nível baixo

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB = PORTB ^ (1<<PB7); // inverte PB7 XOR ("^")
  delay(1000); // atraso de 1s
}
