#include <stdio.h>

int contarDigitos(int n) {
    int contador = 0;
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

void imprimirResultado(int numero, int quantidade) {
    printf("o inteiro %d possui %d dígito(s)\n", numero, quantidade);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n > 0) {
        int digitos = contarDigitos(n);
        imprimirResultado(n, digitos);
    }

    return 0;
}