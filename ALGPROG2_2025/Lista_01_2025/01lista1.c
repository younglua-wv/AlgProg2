#include <stdio.h>

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

float calcularFrequencia(int total, int cumprido) {
    return (cumprido * 100.0) / total;
}

int verificarAprovacao(float media, float frequencia) {
    return (media >= 6.0 && frequencia >= 75.0);
}

int main() {
    float notas[3];
    int cargaTotal, cargaCumprida;

    for (int i = 0; i < 3; i++) {
        scanf("%f", &notas[i]);
    }

    scanf("%d %d", &cargaTotal, &cargaCumprida);


    float media = calcularMedia(notas, 3);
    float frequencia = calcularFrequencia(cargaTotal, cargaCumprida);

    if (verificarAprovacao(media, frequencia)) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}