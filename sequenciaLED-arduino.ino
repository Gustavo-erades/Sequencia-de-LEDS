
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
  digitalWrite(branco, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(200); // Wait for 500 millisecond(s)
  digitalWrite(branco, LOW);
  delay(10); // Wait for 500 millisecond(s)
  digitalWrite(verde, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(300); // Wait for 500 millisecond(s)
  digitalWrite(verde, LOW);
  delay(10); // Wait for 500 millisecond(s)
  digitalWrite(amarelo, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(300); // Wait for 500 millisecond(s)
  digitalWrite(amarelo, LOW);
  delay(10); // Wait for 500 millisecond(s)
  digitalWrite(vermelho, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(300); // Wait for 500 millisecond(s)
  digitalWrite(vermelho, LOW);
  delay(10); // Wait for 500 millisecond(s)
  digitalWrite(azul, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(300); // Wait for 500 millisecond(s)
  digitalWrite(azul, LOW);
  delay(10); // Wait for 500 millisecond(s)
  digitalWrite(branco2, HIGH);// Here too can use LED_BUILTIN or 13 (references digital pin 13)
  delay(300); // Wait for 500 millisecond(s)
  digitalWrite(branco2, LOW);
  delay(5); // Wait for 500 millisecond(s)
}
