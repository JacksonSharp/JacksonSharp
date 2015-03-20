#include<stdio.h>
#include<stdlib.h>
main()
{
      float x, y, z, r;
      printf("Exercicio n 04.\n");
      printf("Digite o valor do produto: ");
      scanf("%f", &x);
      y=0.1;
      z=x*y;
      r=x-z;
      printf("Valor com desconto: %4.2f \n", r);
      system("pause");
      }
