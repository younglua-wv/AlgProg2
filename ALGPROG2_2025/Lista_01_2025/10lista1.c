#include <stdio.h>

#define MAX 100

void bubbleSort(int vetor[], int k) {
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void imprimirVetor(int vetor[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%d", vetor[i]);
        if (i < k - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int k;
    int vetor[MAX];

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, k);

    printf("Lista ordenada\n");
    imprimirVetor(vetor, k);

    return 0;
}