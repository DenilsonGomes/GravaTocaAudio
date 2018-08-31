/*
 * Autor: Denilson Gomes Vaz da Silva
 * Graduando em Engenharia da Computação
 * Universidade Federal do Ceará - UFC
 * 
 * Código para gravar um audio e ficar reproduzindo repetidamente usando o modulo ISD1820
 * Modulo encontrado no link:
 * https://www.arduinoecia.com.br/2014/08/modulo-gravador-de-voz-e-player-isd1820.html
 */

//Variaveis e Constantes
#define pino_rec 2 //pino_rec
#define pino_playe 3 //pino_playe

void setup()
{ 
  pinMode(pino_rec, OUTPUT); //pino_rec como saida
  pinMode(pino_playe, OUTPUT); //pino_playe como saida
  Serial.begin(9600); //Inicia o monitor serial
  
  Serial.println("Vamos começar a gravação em 5 segundos"); //Exibe a mensagem
  for(int i=5;i>0;i--){ //Conta 5 segundos
    Serial.println(i); //Exibe a contagem
    delay(1000); //Espera 1 segundo
  }
  
  Serial.println("Começando a gravação, led aceso"); //Exibe a mensagem
  digitalWrite(pino_rec, HIGH); //Inicia a gravação
  delay(10000); //Espera 10 segundos
  Serial.println("Encerrando a gravação"); //Exibe a mensagem
  digitalWrite(pino_rec, LOW); // Para a gravacao
}

void loop()
{  
  Serial.println("Iniciando a reprodução"); //Exibe a mensagem
  digitalWrite(pino_playe, HIGH); //Inicia a reprodução
  delay(10000); //Espera 10 segundos
  Serial.println("Finalizando a reprodução"); //Exibe a mensagem
  digitalWrite(pino_playe, LOW); //Para a reprodução
  delay(5000); //Espera 5 segundos e reinicia o processo
}
