int vermelho = 2;
int azul = 4;
int verde = 6;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
  analogWrite(azul, 255);
  delay(3000);
    
  analogWrite(verde, 255);
  analogWrite(vermelho, 0);
  analogWrite(azul, 255);
  delay(3000);

  analogWrite(verde, 255);
  analogWrite(vermelho, 255);
  analogWrite(azul, 0);
  delay(3000);
}
