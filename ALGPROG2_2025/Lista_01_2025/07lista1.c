#include <stdio.h>

//verifica se um número é primo
int Primo(int num) {
    if (num <= 1) return 0; //entrada deve ser > 1
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; //não primo
        }
    }
    return 1; //primo
}

int main() {
    int num;
    scanf("%d", &num);

    if (Primo(num)) {
        printf("primo\n");
    } else {
        printf("não primo\n");
    }

    return 0;
}