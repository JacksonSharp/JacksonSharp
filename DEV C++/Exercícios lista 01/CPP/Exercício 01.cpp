#include<stdio.h>
#include<stdlib.h>
main()
{
      //Determinação das variáveis.
      int x;
      int y;
      int z;
      int r;
      //Interface.
      printf("Exercicio n 01. \n");
      printf("Digite 3 numeros:");
      //Determinação dos valores das variáveis.
      scanf("%i %i %i", &x, &y, &z);
      //valor da variável de resposta.
      r=x*y*z;
      //Impressão da resposta na tela.
      printf("Resultado: %i * %i * %i = %i \n", x, y, z, r);
      //Pausa a execução do software.
      system("pause");
      }
