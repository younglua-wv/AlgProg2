//Faça um programa que receba um número representando a altura de 
//um triângulo e imprima o triângulo como no exemplo

#include <stdio.h>

int main(){

    //define a variável que armazena a quantidade de linhas que o triângulo vai ter
    int tamanho;

    //lê o tamanho de linhas que o triângulo vai ter
    scanf("%d", &tamanho);

    //Quantidade de linhas
    for(int i=0; i < tamanho; i++){

        // Quantidade de "*" por linha
        for(int j=0; j <= i; j++){

            //imprime a quantidade de "*" por linha
            printf("*");
        }

        // Pula para a próxima linha
        printf("\n");
    }
    return 0;
}