#include <stdio.h>

void imprimirFatorial(int num) {
    int resultado = 1;

    printf("%d! =", num);
    for (int i = 2; i <= num; i++) {
        printf(" %d", i);
        if (i < num) {
            printf(" *");
        }
        resultado *= i;
    }
    printf(" = %d\n", resultado);
}

int main() {
    int n;
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n; i++) {
        imprimirFatorial(numeros[i]);
    }

    return 0;
}