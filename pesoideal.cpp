#include <stdio.h>
#include <math.h>

int main()
{
  char sex;
  float alt, peso;
  
  printf("Pessoa é Homem ou Mulher? (H/F) ");
	scanf(" %c", &sex);
  printf("Qual a altura? (usando .) ");
  scanf("%f", &alt);

  if(sex == 'H')
    {
      peso = (72.7*alt)-58;
    }
  else
    {
      peso = (62.1*alt)-44.7;
    }
  printf("Seu peso ideal é: %.2f ", peso);
  }