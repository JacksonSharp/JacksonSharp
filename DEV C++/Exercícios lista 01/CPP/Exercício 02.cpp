#include<stdio.h>
#include<stdlib.h>
main()
{
      int x, y;
      float r;
      printf("Exercicio n 02.\n");
      printf("Digite dois numeros:");
      scanf("%i %i", &x, &y);
      r =x/y;
      printf("Resposta: %i / %i = %4.2f \n", x, y, r);
      system("pause");
      }
