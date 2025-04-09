#include <stdio.h>

int contarDigitos(int n) {
    int contador = 0;
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

void armazenarDigitos(int n, int digitos[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        digitos[i] = n % 10;
        n /= 10;
    }
}

void imprimirRepresentacao(int n, int digitos[], int tamanho) {
    printf("%d = ", n);
    for (int i = tamanho - 1; i >= 0; i--) {
        int potencia = 1;
        for (int j = 0; j < tamanho - 1 - i; j++) {
            potencia *= 10;
        }
        printf("%d*%d", digitos[i], potencia);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        int tamanho = contarDigitos(n);
        int digitos[tamanho];

        armazenarDigitos(n, digitos, tamanho);
        imprimirRepresentacao(n, digitos, tamanho);
    }

    return 0;
}