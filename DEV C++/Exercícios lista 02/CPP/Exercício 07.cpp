#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main()
{
      int x;
      printf("Exercicio n 07. \n");
      printf("Infore sua idade: \n");
      scanf("%i", &x);
      if (x>=5 && x<=10)
      {
      printf("Voce esta na categoria infantil. \n");
      system("pause");
      return 0;
      }
      else if (x>=11 && x<=17)
      {
      printf("Voce esta na categoria juvenil. \n");
      system("pause");
      return 0;
      }
      else if (x>=18)
      {
      printf("Voce esta na categoria adulto. \n");
      system("pause");
      return 0;
      }
      }
