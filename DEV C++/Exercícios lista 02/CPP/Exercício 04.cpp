#include<stdlib.h>
#include<stdio.h>
main()
{
      float peso1, peso2;
      char pessoa1, pessoa2;
      printf("Exercicio n 04. \n");
      printf("Digite dois nomes: \n");
      printf("Nome: ");
      scanf("%c %c", &pessoa1, &pessoa2);
      printf("Digite seu peso: \n");
      printf("Peso: ");
      scanf("%f", &peso1);
      printf("Digite outro peso: \n");
      printf("Peso: ");
      scanf("%f", &peso2);
      if (peso1>peso2)
      printf("%c pesa mais que %c! \n", pessoa1, pessoa2);
      else
      printf("%c pesa mais que %c! \n", pessoa2, pessoa1);
      system("pause");
      }
