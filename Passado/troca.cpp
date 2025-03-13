// TROCA O VALOR DE 2 VARIAVEIS
#include<stdio.h>

int main()
{
  int a = 2, b = 3, aux;

  printf("a=%d, b=%d", a, b);
  aux = a;
  a = b;
  b = aux;
  printf("\na=%d, b=%d", a, b);

  printf("\n%d", 2/3);
  printf("\n%f", 2.0/3);
  printf("\n%f", (float)2/3);

  return 0;
}