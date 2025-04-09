#include <stdio.h>

#define MAX 100;

int quantidade;

scanf("%d", &quantidade);

struct{
    int cod;
    char desc;
    float preco;
}produto;



void troca (int i, int j, tproduto v[MAX]){
    
    tproduto temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

}

void ordenacao (int n, struct tproduto v[MAX]){
    
    

}

int BuscaBin (int tam, tproduto v[MAX], int codigo){

    int i, f, m;

    i = 0;

    f = tam-1;

    while(i <= f){

        m = (i + f) / 2;
        
        if(v[m].cod == codigo){

            return m; //Achou
        }

        if(codigo < v[m].cod){

            f = m - 1;

        }else{

            i = m + 1;
        }

    return -1; //Não Achou

    }
}

int main(){

    

}