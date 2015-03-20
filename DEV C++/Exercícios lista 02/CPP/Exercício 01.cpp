#include<stdlib.h>
#include<stdio.h>
main()
{
      int x;
      printf("Exercicio n 01. \n");
      printf("Digite um numero: \n");
      scanf("%i", &x);
      if (x%2==0)
      printf("O numero %i e um numero par! \n", x);
      else
      printf("O numero %i e um numero impar! \n", x);
      system("pause");
      }
