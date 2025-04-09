#include <stdio.h>

int main(){

    int x;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    if(x <= 10){
        printf("O valor de %d está no intervalo A\n", x);
    }else if(x <= 30){
        printf("O valor de %d está no intervalo B1\n", x);
    }else{
        printf("O valor de %d está no intervalo B2\n", x);
    }
    return 0;
}