#include<stdio.h>
#include<stdlib.h>
main()
{
      //Determina��o das vari�veis.
      int x;
      int y;
      int z;
      int r;
      //Interface.
      printf("Exercicio n 01. \n");
      printf("Digite 3 numeros:");
      //Determina��o dos valores das vari�veis.
      scanf("%i %i %i", &x, &y, &z);
      //valor da vari�vel de resposta.
      r=x*y*z;
      //Impress�o da resposta na tela.
      printf("Resultado: %i * %i * %i = %i \n", x, y, z, r);
      //Pausa a execu��o do software.
      system("pause");
      }
