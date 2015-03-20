#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main ()
{
     float z, r, u;
     int x, y;
     int s, n;
     printf("Exercicio n 09. \n");
     printf("TABELA DE PRECOS: \n");
     printf("Especificacao  |  Codigo  |  Preco  | \n");
     printf("Cachorro quente|  100     | R$1,20  | \n");
     printf("Bauru simples  |  101     | R$1,30  | \n");
     printf("Bauru com ovo  |  102     | R$1,50  | \n");
     printf("Hamburger      |  103     | R$1,20  | \n");
     printf("Cheeseburguer  |  104     | R$1,30  | \n");
     printf("Refrigerante   |  105     | R$1,00  | \n");
     printf("-----SAIR----- |  106 \n");
     printf("...\n");
     printf("Digite o codigo do item: \n");
     scanf(" %i", &x);
     if (x==100)
     {
        printf("Informe a quantidade de Cachorro quente: \n");
        scanf("%i", &y);
        z=y*1.20;
        printf("Total a pagar: R$%4.2f \n", z);
        system("pause");
        system("cls");
        return main ();
        }
     else if (x==101)
     {
          printf("Informe a quantidade de Bauru simples: \n");
          scanf("%i", &y);
          z=y*1.30;
          printf("Total a pagar: R$%4.2f \n", z);
          system("pause");
          system("cls");       
          return main ();
          }
     else if (x==102)
     {
          printf("Informe a quantidade de Bauru com ovo: \n");
          scanf("%i", &y);
          z=y*1.50;
          printf("Total a pagar: R$%4.2f \n", z);
          system("pause");
          system("cls");
          return main ();
          }
     else if (x==103)
     {
          printf("Informe a quantidade de Hamburger: \n");
          scanf("%i", &y);
          z=y*1.20;
          printf("Total a pagar: R$%4.2f \n", z);
          system("pause");
          system("cls");
          return main ();
          }
     else if (x==104)
     {
          printf("Informe a quantidade de Cheeseburguer: \n");
          scanf("%i", &y);
          z=y*1.30;
          printf("Total a pagar: R$%4.2f \n", z);
          system("pause");
          system("cls");
          return main ();
          }
     else if (x==105)
     {
          printf("Informe a quantidade de Refrigerante: \n");
          scanf("%i", &y);
          z=y*1.00;
          printf("Total a pagar: R$%4.2f \n", z);
          system("pause");
          system("cls");
          return main ();
          }
     else if (x==106)
     {
          printf("Deseja sair? 1 para sim e 2 para nao. \n");
          scanf(" %i", &s);
          switch (s)
          {
                 case 1: return 0;
                         break;                         }
                 case 2: system("cls");
                         return main ();
                         break;
                         }
          }
          }
