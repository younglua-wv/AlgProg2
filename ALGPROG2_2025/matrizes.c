// matrizes e passagem de parâmetro para funções

#include <stdio.h>
#define LIN 15
#define COL 15

// ***************************
// DECLARAÇÃO DAS FUNÇÕES
// ***************************
void Le_Int(int *n);
void Le_Mat(int lin, int col, int M[][COL]);
void Imprime_Mat(int lin, int col, int M[][COL]);
//int  Soma_Linha(int lin, int col, int M[][COL]);
int  Soma_Linha(int col, int M[]);



// ***************************
// FUNÇÃO PRINCIPAL
// ***************************
int main()
{
  int n, M[LIN][COL], soma, lin, col;

  // Lê a dimensão (linha)
  do{
    printf("Digite a quantidade de linhas da matriz: ");
    Le_Int(&lin);
  }while(lin < 1 || lin > LIN);

  // Lê a dimensão (coluna)
  do{
    printf("Digite a quantidade de colunas da matriz: ");
    Le_Int(&col);
  }while(col < 1 || col > COL);

  // Lê e armazena a matriz
  // esta função modifica a matriz recebida
  Le_Mat(lin, col, M);

  // Imprime a matriz armazenada
  // esta função não modifica a matriz recebida
  Imprime_Mat(lin, col, M);


  // Determina a soma de cada uma das linhas
  // da matriz
  // esta função recebe somente a linha i da matriz. 
  // A linha i da matriz é um vetor de ''col'' elementos
  for (int i = 0; i < lin; i++)
    //printf("A soma dos valores da linha %d da matriz é: %d: \n", (i+1), Soma_Linha(i, col, M));
    printf("A soma dos valores da linha %d da matriz é: %d: \n", (i+1), Soma_Linha(col, M[i]));

  return 0;
}


// ***************************
// IMPLEMENTAÇÃO DAS FUNÇÕES
// ***************************

void  Le_Int(int *n)
{
  scanf("%d", n);
}



void Imprime_Mat(int l, int c, int M[][COL])
{
  int i, j;

  printf("Os valores armazenados são: \n");
  for(i = 0; i < l; i++)
  {
      for(j = 0; j < c; j++)
        printf("%d ", M[i][j]);
      printf("\n");
  }
}

// todas estas formas de passagem são válidas
// sem necessidade de alterar o código do corpo
// da função main
void Le_Mat(int l, int c, int M[][COL])
{
  int i, j;


 // printf("Digite os valores a serem armazenados na matriz:");
  for(i = 0; i < l; i++)
      for(j = 0; j < c; j++)
        scanf("%d", &M[i][j]);
}



int Soma_Linha(int c, int M[])
{
  int i, soma = 0;

  for(i = 0; i < c; i++)
    soma += M[i];

  return soma;
}

/*
int Soma_Linha(int l, int c, int M[][COL])
{
  int i, soma = 0;

  for(i = 0; i < c; i++)
    soma += M[l][i];

  return soma;
}
*/