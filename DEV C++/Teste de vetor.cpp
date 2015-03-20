#include<stdio.h>
#include<iostream>
main ()
{
     int vet[10], x, y;
     printf("Digite 10 valores: \n");
     for (x=1;x<=10;x++)
     {
         scanf("%i", &vet[x]);
         if (vet[x]>=0)
         printf("Esse valor e positivo! \n");
         else
         printf("Esse valor e negativo! \n");
         }
     system("pause");
     }
