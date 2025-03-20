#include <stdio.h>

int main(){

    int i, kVezes; //Declaração de Variáveis

    scanf("%d", &kVezes); //Lendo quantas vezes o dado vai ser lançado
    
    int Vetor[kVezes]; //Declarando o Vetor com o tamanho da quantidade de vezes

    for(i=0; i< kVezes; i++){
        scanf("%d", &Vetor[i]); //Lendo os dados dos lançamentos
    }
    for(i=0; i< kVezes; i++){
        printf("A frequência da face %d é: %d\n", i+1, Vetor[i]); //Imprimindo a frequência de cada lado
    }
return 0;        
}


    
