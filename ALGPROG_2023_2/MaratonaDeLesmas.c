#include <stdio.h>

int main() {
    int i, n;
    int velocidades[100];
    int duracao, limite;
    int maxima;
  
    scanf("%d", &n);

    if(duracao == 1){
        limite = 100;
    }else if(duracao == 2){
        limite = 20;
    }else{
        limite = 10;
    }

    for(i = 0; i < n; i++){
        scanf("%d", &velocidades[i]);
    }

    scanf("%d", &duracao);

    for(i = 0; i < velocidades[i]; i++){
        if(i > maxima && i <= limite)
            maxima = i;
    }

    printf("%d", &maxima);
    
    return 0;
}
