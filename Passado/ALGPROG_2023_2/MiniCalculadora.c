#include <stdio.h>

int main(void) {
  int n;
  float operando1, operando2;
  float resultado;
  char operador;

  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){

    scanf("%f %c %f", &operando1, &operador, &operando2);
    
    if(n <= 0){

        return 0;
    
    }else{

      if(operador == '+'){

        resultado = operando1 + operando2;
        printf("%.1f\n", resultado);
    
      }else if(operador == '-'){

        resultado = operando1 - operando2;
        printf("%.1f\n", resultado);
    
      }else if(operador == '*'){

        resultado = operando1 * operando2;
        printf("%.1f\n", resultado);
    
      }else if(operador == '/'){

        resultado = operando1 / operando2;
        printf("%.1f\n", resultado); 

      }else{

        printf("Erro: operador não reconhecido\n");
        
      }
    }
  }
  return 0;
}