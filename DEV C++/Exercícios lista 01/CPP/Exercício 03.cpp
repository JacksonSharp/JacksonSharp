#include<stdio.h>
#include<stdlib.h>
main()
{
      //Definição das variáveis.
      float m, x, r;
      printf("Exercicio n 03. \n");
      printf("Digite o valor do salario minimo e depois seu salario:\n");
      //Definição do valor de cada variável.
      scanf("%f %f", &m, &x);
      //Atribuição de valor a variavel "r".
      r = x/m;
      //Impressão na tela da resposta.
      printf("Este funcionario ganha %4.2f salarios minimos.\n", r);
      //pausa a execução do soft.
      system("pause");
      } 
