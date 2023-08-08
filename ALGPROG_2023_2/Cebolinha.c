#include <stdio.h>
#include <string.h>
#define MAX_PALAVRA 20

//void copiar_cebolinha(char original[], char nova[]) {
  /* Falta implementar: copiar para "nova" a palavra "original"
     com as alterações do Cebolinha */

//}

int main() {
    char palavra[MAX_PALAVRA];
    char palavra_modificada[MAX_PALAVRA];

    //strlen(palavra);

    scanf("%s", palavra);
    //0 1 2  3 4 5 6 7 ... 19
    //O l a \0 x x x x x x x 
    
    for(int comprimento = strlen(palavra) - 1; palavra[comprimento] >= 0; comprimento--){
        if(palavra[comprimento] == "R" || palavra[comprimento] == "R"){
            palavra_modificada[comprimento] = "L";
        
        }else{
            palavra_modificada[comprimento] = palavra[comprimento];
            
        }
        
    }
    printf("%s, %s\n", palavra_modificada[1], palavra[1]);
    printf("%s\n", palavra_modificada);

    //copiar_cebolinha(palavra, palavra_modificada);
    //printf("%s", palavra_modificada);
    

    return 0;
}