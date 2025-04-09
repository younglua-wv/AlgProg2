//Para um dado inteiro positivo n, imprima n linhas como nos exemplos.
#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    //Quantidade de linhas e regressão de num por I
    for(int i = 1; i<=num; i++){
        //Quantidade de espaços
        for(int j = 1; j<=num-i; j++){
            printf(" ");
        }
        printf("%d\n", i);
    }
    return 0;
}