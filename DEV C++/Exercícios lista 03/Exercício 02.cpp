#include<stdio.h>
#include<iostream>
#include<stdlib.h>
main ()
{
     int x, y, z, v[10], positivo[10], negativo[10];
     printf("Exercicio n 02. \n");
     printf("Digite 10 valores: \n");
     for(x=1; x<=10; x++)
     {
              printf("Valor numero %i: ", x);
              scanf("%i", &v[x]);
     if (v[x]>=0)
     {
                 positivo[y]=v[x];
                 printf("Numeros positivos digitados: \n");
                 printf("%i \n", positivo[y]);
                 }
     else if (v[x]<0)
     {
                 negativo[z]=v[x];
                 printf("Numeros negativos digitados: \n");
                 printf("%i \n", negativo[z]);
                 }
                 }
     system("pause");
     }
