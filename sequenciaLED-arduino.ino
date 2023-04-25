
#define branco 2 
#define vermelho 3
#define amarelo 4
#define verde 5
#define azul 6
#define branco2 7
int pino[6]={branco,vermelho,amarelo,verde,azul,branco2};

void setup()
{
  for(int i=5;i>=2;i--){
    pinMode(pino[i],OUTPUT);
  }
}

void loop()
{
  for( int i=5;i>=0;i--){
      digitalWrite(pino[i],HIGH);
      delay(300);
      digitalWrite(pino[i],LOW);
    }
}
