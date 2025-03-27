#include <stdio.h>

struct hora{

    int hh;
    int mm;
    int ss;

};

int main(){
    
    hora horaAnt, horaAt;
    int a, b, c;
    scanf("%d:%d:%d", &horaAnt.hh, &horaAnt.mm, &horaAnt.ss);

    a = (horaAnt.hh*60)*60;
    b = horaAnt.mm*60;
    c = horaAnt.ss;


    if (prox.ss == 60) {
        prox.ss = 0;
        prox.mm = prox.mm + 1;
        if (prox.mm == 60) {
        prox.mm = 0;
        prox.hh = prox.hh + 1;
            if (prox.hh == 24){
                prox.hh = 0;
            }
        }
    }
}




