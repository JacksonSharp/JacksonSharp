#include<stdio.h>
#include<stdlib.h>
main()
{
      float x, y, z, a, r;
      printf("Exercicio n 05. \n");
      printf("Digite o salario fixo: ");
      scanf("%f", &x);
      printf("Digite o valor das vendas: ");
      scanf("%f", &y);
      z = 0.05;
      a = y * z;
      r = a + x;
      printf("Salarito total: %4.2f \n", r);
      system("pause");
      }
