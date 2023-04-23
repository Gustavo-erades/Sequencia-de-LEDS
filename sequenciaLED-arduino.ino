
#define branco 4
#define azul 2
#define vermelho 3
#define amarelo 9
#define verde 8
#define branco2 11

void setup()
{
  pinMode(branco, OUTPUT);
  pinMode(branco2, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  digitalWrite(branco, HIGH);
  delay(200); 
  digitalWrite(branco, LOW);
  delay(10); 
  digitalWrite(verde, HIGH);
  delay(300); 
  digitalWrite(verde, LOW);
  delay(10); 
  digitalWrite(amarelo, HIGH);
  delay(300); 
  digitalWrite(amarelo, LOW);
  delay(10);
  digitalWrite(vermelho, HIGH);
  delay(300); 
  digitalWrite(vermelho, LOW);
  delay(10);
  digitalWrite(azul, HIGH);
  delay(300); 
  digitalWrite(azul, LOW);
  delay(10); 
  digitalWrite(branco2, HIGH);
  delay(300);
  digitalWrite(branco2, LOW);
  delay(5);
}
