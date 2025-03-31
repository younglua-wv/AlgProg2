//Para um dado inteiro positivo n, imprima n linhas como nos exemplos.
#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    //Quantidade de linhas e regressão de num por I
    for(int i = num; i>0; i--){
        //Quantidade de espaços
        for(int j = i; j !=0; j--){
            printf(" ");
        }
        printf("%d\n", i);
    }
    return 0;
}