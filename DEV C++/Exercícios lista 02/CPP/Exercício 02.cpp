#include<stdlib.h>
#include<stdio.h>
main()
{
      int x, y, z;
      printf("Exercicio n 02. \n");
      printf("Digite dois numeros: \n");
      scanf("%i %i", &x, &y);
      z = x+y;
      if (z>10)
      printf("A soma e igual a: %i \n", z);
      else
      printf("A soma e menor que 10! \n");
      system("pause");
      }
