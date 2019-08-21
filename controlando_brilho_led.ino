// definindo ENTRADA com o valor 8
#define ENTRADA A0
#define LED     9

void setup() {
  // configurando a porta como entrada
  pinMode(ENTRADA, INPUT);
  pinMode(LED, OUTPUT);
  // iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // variavel que armazena o valor recebido pela porta digital
  int valorLido = analogRead(ENTRADA);
  // mostrando na serial valor recebido
  Serial.println(valorLido);
  // alterando brilho do led
  analogWrite(LED, valorLido / 4);
  // aguardar 100 milesegundos
  delay(100);
}
