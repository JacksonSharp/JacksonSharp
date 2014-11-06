#include<stdio.h>
#include<stdlib.h>
main()
{
      int x, result, num1, num2;
      printf("Teste de raiz... \n");
      printf("Digite um numero que voce queira saber a raiz quadrada: \n");
      scanf("%i", &x);
      for (num1=1;result!=x;num1++)
      {
           num2 = num1;
           result = num1*num2;
           system("pause");
           system("cls");
           printf("A raiz de %i e %i! \n", result, num1);
      }
      system("pause");
      }
