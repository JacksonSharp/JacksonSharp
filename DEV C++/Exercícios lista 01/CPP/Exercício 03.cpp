#include<stdio.h>
#include<stdlib.h>
main()
{
      //Defini��o das vari�veis.
      float m, x, r;
      printf("Exercicio n 03. \n");
      printf("Digite o valor do salario minimo e depois seu salario:\n");
      //Defini��o do valor de cada vari�vel.
      scanf("%f %f", &m, &x);
      //Atribui��o de valor a variavel "r".
      r = x/m;
      //Impress�o na tela da resposta.
      printf("Este funcionario ganha %4.2f salarios minimos.\n", r);
      //pausa a execu��o do soft.
      system("pause");
      } 
