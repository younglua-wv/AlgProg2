#include <stdio.h>

void calcularTroco(int troco, int notas[], int quantidade[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        quantidade[i] = troco / notas[i];
        troco %= notas[i];
    }
}

void imprimirNotas(int notas[], int quantidade[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (quantidade[i] > 0) {
            if (quantidade[i] == 1) {
                printf("1 nota de %d\n", notas[i]);
            } else {
                printf("%d notas de %d\n", quantidade[i], notas[i]);
            }
        }
    }
}

int main() {
    int valorCompra, valorPago;

    scanf("%d %d", &valorCompra, &valorPago);

    int troco = valorPago - valorCompra;

    int notasDisponiveis[] = {50, 10, 5, 1};
    int quantidadeNotas[4];

    calcularTroco(troco, notasDisponiveis, quantidadeNotas, 4);
    imprimirNotas(notasDisponiveis, quantidadeNotas, 4);

    return 0;
}