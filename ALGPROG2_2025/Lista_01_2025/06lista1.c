#include <stdio.h>
#include <string.h>

#define MAX 20

void mediaAR(float media, float notaAP, char mensagem[MAX]) {
    if (media >= notaAP) {
        strcpy(mensagem, "Aprovado");
    } else {
        strcpy(mensagem, "Reprovado");
    }
}

int main() {
    float notaMinima, mediaAluno;
    char mensagem[MAX];

    scanf("%f %f", &notaMinima, &mediaAluno);

    mediaAR(mediaAluno, notaMinima, mensagem);

    printf("%.1f %s\n", mediaAluno, mensagem);

    return 0;
}