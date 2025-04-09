//Leia um valor inteiro n e, em seguida n valores inteiros positivos. 
//Para cada inteiro lido, apresente o seu fatorial.
#include <stdio.h>

int main() {
    int qn;
    // Lê a quantidade de números que serão processados
    scanf("%d", &qn);  
    
    int n[qn];
    
    // Lê os números
    for(int i = 0; i < qn; i++) {
        scanf("%d", &n[i]);
    }

    // Para cada número, calcula o fatorial
    for(int i = 0; i < qn; i++) {
        // Inicializa o valor do fatorial
        int aux = 1;  
        
        // Calcula o fatorial de n[i]
        for(int j = 1; j <= n[i]; j++) {
            // Multiplica o valor de aux pelo valor de j
            aux *= j;  
        }

        // Exibe o número seguido do fatorial no formato desejado
        printf("%d! = %d\n", n[i], aux);
    }

    return 0;
}