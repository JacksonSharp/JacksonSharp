#include<stdio.h>
#include<stdlib.h>
main()
{
      float b, p, x, y, z, r;
      printf("Exercicio n 09. \n");
      printf("Digite a quantidade de paes  e broas vendidos: \n");
      printf("Paes = ");
      scanf("%f", &p);
      printf("Broas = ");
      scanf("%f", &b);
      x = 0.12 * p;
      y = 1.50 * b;
      z = x + y;
      r = z * 0.1;
      printf("Total arrecadado em paes: R$%4.2f \n", x);
      printf("Total arrecadado em broas: R$%4.2f \n", b);
      printf("Total arrecadado no dia: R$%4.2f \n", z);
      printf("Total a colocar na conta: R$%4.2f \n", r);
      system("pause");
      }
