#include<stdio.h>
#include<stdlib.h>
main()
{
      float x, y, z, s, r;
      printf("Exercicio n 06. \n");
      printf("Digite a sua nota da prova 1:");
      scanf("%f", &x);
      printf("Digite a sua nota da prova 2:");
      scanf("%f", &y);
      printf("Digite a sua nota da prova 3:");
      scanf("%f", &z);
      s = x+y+z;
      r = s/3;
      printf("Sua media e de: %4.2f \n", r);
      system("pause");
      }
