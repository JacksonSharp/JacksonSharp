#include<stdlib.h>
#include<stdio.h>
main()
{
      float x, y, z, soma;
      printf("Exercicio n 03. \n");
      printf("Digite suas notas: \n");
      printf("Primeira prova: ");
      scanf("%f", &x);
      printf("Segunda prova: ");
      scanf("%f", &y);
      printf("Terceira prova: ");
      scanf("%f", &z);
      x = x*2;
      y = y*3;
      z = z*5;
      soma = x+y+z/10;
      if (soma>=7)
      {
                  printf("Media final: %3.1f \n", soma);
                  printf("Aluno aprovado! \n");
                  }
      else
      {
          if (soma<3)
          printf("Voce esta reprovado! \n");
          else
          printf("Voce esta de recuperacao! \n");
          }
      system("pause");
      }
