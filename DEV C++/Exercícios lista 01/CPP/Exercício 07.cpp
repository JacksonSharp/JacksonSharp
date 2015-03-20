#include<stdio.h>
#include<stdlib.h>
main()
{
      float D, R, S;
      int A, B, C;
      printf("Exercicio n 07. \n");
      printf("Defina os valores de A, B e C: \n");
      printf("A = ");
      scanf("%i", &A);
      printf("B = ");
      scanf("%i", &B);
      printf("C = ");
      scanf("%i", &C);
      R = A + B;
      S = B - C;
      D = R + S / 2;
      printf("Resultado: D=%4.2f \n", D);
      system("pause");
      }
