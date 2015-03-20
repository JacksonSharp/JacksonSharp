#include<stdlib.h>
#include<stdio.h>
main()
{
      float x, y, z, soma1, soma2;
      printf("Exercicio n 05. \n");
      printf("Informe o valor do produto! (Ex:10.50) \n");
      printf("R$");
      scanf("%f", &x);
      y = x*0.45;
      z = x*0.30;
      soma1 = y+x;
      soma2 = z+x;
      if (x<20.00)
      {
      printf("O valor do produto a ser vendido sera de R$%4.2f \n", soma1);
      printf("Voce tera um lucro de 45 porcento de desconto! \n");
      }
      else
      {
      printf("O valor do produto a ser vendido sera de R$%4.2f \n", soma2);
      printf("Voce tera um lucro de 30 porcento de desconto! \n");
      }
      system("pause");
      }
