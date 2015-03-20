#include<stdio.h>
#include<stdlib.h>
#include<iostream>
void soma_numero()
{
     int num1, num2, result;
     printf("Digite um numero: \n");
     scanf("%i", &num1);
     printf("Digite um segundo numero:\n");
     scanf("%i", &num2);
     result=num1+num2;
     printf("O resultado e: %i \n", result);
     }
     main ()
     {
          printf("Operacao soma: \n");
          system("pause");
          soma_numero();
          printf("FIM! \n");
          system("pause");
          }
