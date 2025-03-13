#include<stdio.h> // printf, scanf
#include<math.h> // sqrt

int main()
{

  double a, b, c, delta, x1, x2;
  
  scanf("%lf %lf %lf", &a, &b, &c);

  delta = pow(b, 2) - 4 * a * c;
  
  if(delta >= 0)
  {
    x1 = (-(b) + sqrt(delta)) / 2 * a;
    x2 = (-(b) - sqrt(delta)) / 2 * a;
    printf("%.2lf, %.2lf", x2, x1);
  }
  else
  {
    printf("A equação não possui raízes reais");
  }
}