#include <stdio.h>

int main(){
    int i, j, m, n, l, c, varC, varL;

    scanf("%d\n%d",&m,&n);

    int Matriz[m][n];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &Matriz[i][j]);
        }
    }

    varL = 0;

    for(i=0; i<m; i++){
        l = 0;
        for(j=0; j<n; j++){
            if(Matriz[i][j]==0){
                l+=1;
            }
        }
        if(l == m){
            varL += l;
        }
    }

    varC = 0;

    for(j=0; j<m; j++){
        c = 0;
        for(i=0; i<n; i++){
            if(Matriz[j][i]==0){
                c+=1;
            }
        }
        if(c == n){
            varC += 1;
        }
    }

    printf("A quantidade de linhas nulas são: %d\nA quantidade de colunas nulas são:%d\n", varL, varC);
    
    return 0;
}