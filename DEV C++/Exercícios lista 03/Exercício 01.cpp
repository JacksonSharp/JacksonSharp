#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main ()
{
     int x, y, z, a, b;
     printf("Exercicio n 01. \n");
     printf("Digite um numero de 1 a 9: \n");
     scanf("%i", &x);//Define o número multiplo;
     printf("Defina a quantidade das multiplicacoes: \n");
     scanf("%i", &a);/* Define a quantidade de vezes que será multiplicado.
                        Exemplo: 100
                        Aqui ele irá multiplicar o número digitado acima
                        por 1, por 2, por 3, por 4 ... até 100; */
     printf("Escolha uma das opcoes de impressao na tela: 1 ou 2 \n");
     scanf("%i", &b);
     switch(b)
     {
              case 1:
                   {
                         printf("Multiplos de %i: \n", x);
                         for (y=1; y<=a; y++)
                         {
                             z = x*y;
                             printf("%i * %i = %i \t", x, y, z);
                             }
                         break;
                         }
              case 2:
                   {
                         printf("Multiplos de %i: \n", x);
                         for (y=1; y<=a; y++)
                         {
                             z = x*y;
                             printf("%i * %i = %i \n", x, y, z);
                             }
                         break;
                         }
                         }
     system("pause");
     }
