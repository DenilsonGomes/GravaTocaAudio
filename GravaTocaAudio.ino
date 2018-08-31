// Programa : Gravador de voz e player ISD1820
// Autor : Arduino e Cia

// Pino ligado ao REC do modulo
int pino_rec = 5;
// Pino ligado ao P-E (PLAYE) do modulo
int pino_playe = 7;

void setup()
{ 
  pinMode(pino_rec, OUTPUT);
  pinMode(pino_playe, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(5000);
  // Inicia a gravacao
  Serial.println("Iniciando a gravação");
  digitalWrite(pino_rec, HIGH);
  delay(10000);
  // Para a gravacao
  Serial.println("Encerrando a gravação");
  digitalWrite(pino_rec, LOW);
  // Aguarda 5 segundos
  delay(5000);
  // Inicial a reproducao
  Serial.println("Iniciando a reprodução");
  digitalWrite(pino_playe, HIGH);
  delay(100);
  Serial.println("Finalizando a reprodução");
  digitalWrite(pino_playe, LOW);
  // Aguarda 20 segundos e reinicia o processo
  delay(20000);
}
