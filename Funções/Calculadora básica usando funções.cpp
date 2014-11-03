#include<stdio.h>
#include<stdlib.h>
#include<iostream>
void somar_numero()
{
     float num1, num2, result;
     printf("Digite um numero: \n");
     scanf("%f", &num1);
     printf("Digite outro numero: \n");
     scanf("%f", &num2);
     result = num1 + num2;
     printf("Resultado: %4.2f \n", result);
     system("pause");
     }
void diminuir_numero()
{
     float num1, num2, result;
     printf("Digite um numero: \n");
     scanf("%f", &num1);
     printf("Digite outro numero: \n");
     scanf("%f", &num2);
     result = num1 - num2;
     printf("Resultado: %4.2f \n", result);
     system("pause");
     }
void multiplicar_numero()
{
     float num1, num2, result;
     printf("Digite um numero: \n");
     scanf("%f", &num1);
     printf("Digite outro numero: \n");
     scanf("%f", &num2);
     result = num1 * num2;
     printf("Resultado: %4.2f \n", result);
     system("pause");
     }
void dividir_numero()
{
     float num1, num2, result;
     printf("Digite um numero: \n");
     scanf("%f", &num1);
     printf("Digite outro numero: \n");
     scanf("%f", &num2);
     result = num1 / num2;
     printf("Resultado: %4.2f \n", result);
     system("pause");
     }
void entrada_sistema()
{
     int senha, num_senha;
     printf("Digite uma senha: \n");
     scanf("%i", &num_senha);
     system("cls");
     printf("Senha salva com sucesso!!! \n");
     system("pause");
     system("cls");
     senha = 0;
     printf("Digite sua senha de acesso: ");
     scanf("%i", &senha);
     if (senha==num_senha)
     {
     system("cls");
     printf("Acesso permitido! \n");
     system("pause");
     system("cls");
     }
     else
     {
     system("cls");
     printf("Acesso negado!!! \n");
     system("pause");
     system("cls");
     return entrada_sistema();
     }
     }
void alterar_senha()
{
     int senha;
     printf("Digite uma nova senha: \n");
     scanf("%i", &senha);
     printf("Senha alterada com sucesso!!! \n");
     }
main()
{
      int x;
      entrada_sistema();
      printf("...::: MENU PRINCIPAL :::... \n");
      printf(" \n");
      printf("1 - SOMAR \n2 - DIMINUIR \n3 - MULTIPLICAR \n4 - DIVIDIR \n5 - SAIR \n6 - ALTERAR SENHA");
      printf(" \n");
      printf("Escolha uma das opcoes acima: \n");
      scanf("%i", &x);
      system("cls");
      switch(x)
      {
               case 1:
                    printf("..:: SOMAR ::.. \n");
                    somar_numero();
                    system("cls");
                    printf(".: FIM :. \n");
                    system("pause");
                    system("cls");
                    return main();
                    break;
               case 2:
                    printf("..:: DIMINUIR ::.. \n");
                    diminuir_numero();
                    system("cls");
                    printf(".: FIM :. \n");
                    system ("pause");
                    system("cls");
                    return main();
                    break;
               case 3:
                    printf("..:: MULTIPLICAR ::.. \n");
                    multiplicar_numero();
                    system("cls");
                    printf(".: FIM :. \n");
                    system("pause");
                    system("cls");
                    return main();
                    break;
               case 4:
                    printf("..:: DIVIDIR ::.. \n");
                    dividir_numero();
                    system("cls");
                    printf(".: FIM :. \n");
                    system("pause");
                    system("cls");
                    return main();
                    break;
               case 5:
                    printf("..:: SAIR ::.. \n");
                    system("exit");
                    break;
               case 6:
                    printf("..:: ALTERAR SENHA ::.. \n");
                    alterar_senha();
                    return main();
                    break;
               default:
                       system ("cls");
                       printf("OPS! \nVoce digitou um comando nao valido. \n Tente novamente: \n");
                       return main();
                       break;
                       }
                       }
