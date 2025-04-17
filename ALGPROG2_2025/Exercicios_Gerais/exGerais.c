#include <stdio.h>
#include <string.h>

#define maxDisc 50
#define maxAlunos 60

int n, k;

struct Disciplina {
    int Codigo;
    char NomeDisciplina[100];
    char Professor[100];
    int CargaH;
}Disciplinas[maxDisc];

struct Aluno{
    char RGA[20];
    char NomeAluno[100];
    struct Disciplina*Disciplina; //Ponteiro para a struct disciplina
} Alunos[maxAlunos];


void CadastroDisc(k, Disciplinas){

    for(int i = 0; i < k; i++){
    
        scanf("%d", Disciplinas[i].Codigo);
        scanf("%s", Disciplinas[i].NomeDisciplina);
        scanf("%s", Disciplinas[i].Professor);
        scanf("%d", Disciplinas[i].CargaH);
    }
}

void CadastroAlunos(n, Alunos){

    for(int i = 0; i < n; i++){
    
        scanf("%s", Alunos[i].RGA);
        scanf("%s", Alunos[i].NomeAluno);

        int codigoDisciplina;
        
        scanf("%d", codigoDisciplina);

        for(int j = 0; codigoDisciplina != Disciplinas[j].Codigo; j++){
            
            Alunos[i].Disciplina = &Disciplinas[j];
            
            return Alunos[i].Disciplina;
        }
    }

}

int main(){

    

}