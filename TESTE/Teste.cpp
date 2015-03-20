#include<stdio.h>
#include<stdlib.h>
main()
{
      int x;
      int y;
      int r;
      printf("Programa de soma: \n");
      printf("Digite dois numeros:");
      scanf("%i %i", &x, &y);
      r=x+y;
      printf("Resultado: %i + %i = %i \n", x, y, r);
      system("pause");
      }
