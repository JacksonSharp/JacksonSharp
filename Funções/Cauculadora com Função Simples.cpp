#include<stdio.h>
#include<stdlib.h>
#include<iostream>
void soma_numero()
{
     int num[2], x, result;
     for (x=0;x<2;x++)
     {
         printf("Digite dois numeros inteiros: \n");
         scanf ("%i", &num[x]);
         result = num[0] + num[1];
         printf("Resultado = %i \n", result);
         system("pause");
         }
         }
void subtracao_numero()
{
     int num[2], x, result;
     for (x=0;x<2;x++)
     {
         printf("Digite dois numeros inteiros: \n");
         scanf ("%i", &num[x]);
         result = num[0] - num[1];
         printf("Resultado = %i \n", result);
         system("pause");
         }
         }
void multiplicacao_numero()
{
     int num[2], x, result;
     for (x=0;x<2;x++)
     {
         printf("Digite dois numeros inteiros: \n");
         scanf ("%i", &num[x]);
         result = num[0] * num[1];
         printf("Resultado = %i \n", result);
         system("pause");
         }
         }
void divisao_numero()
{
     int num[2], x, result;
     for (x=0;x<2;x++)
     {
         printf("Digite dois numeros inteiros: \n");
         scanf ("%i", &num[x]);
         result = num[0] / num[1];
         printf("Resultado = %i \n", result);
         system("pause");
         }
         }
main ()
{
     int x;
     printf("...::: MENU PRINCIPAL :::... \n");
     printf("Escolha uma das opcoes abaixo: \n");
     printf("1 - Somar \n");
     printf("2 - Subtrair \n");
     printf("3 - Multiplicar \n");
     printf("4 - Dividir \n");
     printf("************************************ \n");
     scanf("%i", &x);
     switch(x)
     {
     case 1:
          printf("OPERACAO DE SOMA: \n");
          soma_numero();
          break;
     case 2:
          printf("OPERACAO DE SUBTRACAO: \n");
          subtracao_numero();
          break;
     case 3:
          printf("OPERACAO DE MULTIPLICACAO: \n");
          multiplicacao_numero();
          break;
     case 4:
          printf("OPERACAO DE DIVISAO: \n");
          divisao_numero();
          break;
     default:
            printf("Opcao errada! Tente novamente! \n");
            break;
            }
     system("pause");
     }
