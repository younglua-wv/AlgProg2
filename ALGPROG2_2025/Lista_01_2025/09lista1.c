#include <stdio.h>

#define MAX 100
#define INTERVALO 16

void contarFrequencias(int valores[], int tamanho, int frequencias[]) {
    for (int i = 0; i < INTERVALO; i++) {
        frequencias[i] = 0;
    }
    for (int i = 0; i < tamanho; i++) {
        if (valores[i] >= 0 && valores[i] < INTERVALO) {
            frequencias[valores[i]]++;
        }
    }
}

void imprimirFrequencias(int frequencias[]) {
    for (int i = 0; i < INTERVALO; i++) {
        printf("O inteiro %d apareceu %d vezes na sequência de entrada\n", i, frequencias[i]);
    }
}

int main() {
    int valores[MAX];
    int frequencias[INTERVALO];
    int num, count = 0;

    while (scanf("%d", &num) == 1 && num != -1 && count < MAX) {
        valores[count++] = num;
    }

    contarFrequencias(valores, count, frequencias);
    imprimirFrequencias(frequencias);

    return 0;
}