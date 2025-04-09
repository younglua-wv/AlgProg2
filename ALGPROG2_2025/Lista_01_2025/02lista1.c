#include <stdio.h>

int ehDivisor(int num1, int num2) {
    return (num2 % num1 == 0);
}

void imprimirResultado(int num1, int num2) {
    if (ehDivisor(num1, num2)) {
        printf("%d é divisor de %d\n", num1, num2);
    } else {
        printf("%d não é divisor de %d\n", num1, num2);
    }
}

int main() {
    int numeros[2];

    scanf("%d %d", &numeros[0], &numeros[1]);

    imprimirResultado(numeros[0], numeros[1]);

    return 0;
}