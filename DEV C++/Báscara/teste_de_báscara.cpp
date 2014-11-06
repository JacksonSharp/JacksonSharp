#include<stdio.h>
#include<stdlib.h>
#include<iostream>

void formula_bascara ()
{
                    float a, b, c, var_result_x1, var_result_x2; 
                    system("cls");
                    printf("Atencao !!! \nSiga as intrucoes abaixo: \n");
                    printf("Forula de bascara: \n");
                    printf(" \n");
                    printf("x=-b+_(RAIZdeDELTA)/2a \n");
                    printf(" \n");
                    printf("RAIZdeDELTA = QUADRADOde 'b' -4ac \n");
                    printf(" \n");
                    printf("Agora voce vai substituir os valores das vaiaveis: \n");
                    printf("VARIAVEL 'a' = \n");
                    scanf("%f", &a);
                    printf("VARIAVEL 'b' = \n");
                    scanf("%f", &b);
                    printf("VARIAVEL 'c' = \n");
                    scanf("%f", &c);
                    printf(" \n");
                    printf("Resultado abaixo: \n");
                    system("pause");
                    system("cls");
                    var_result_x1 = (-b+(b*b-4*a*c))/2*a;
                    var_result_x2 = (-b-(b*b-4*a*c))/2*a;
                    printf("RESULTADO: \n");
                    printf(" \n");
                    printf(" x1= %4.3f", var_result_x1);
                    printf(" \n");
                    printf(" \n");
                    printf(" x2= %4.3f", var_result_x2);
                    printf(" \n");
                    printf(" \n");
                    printf("...::: FIM :::... \n");
                    printf(" \n");
                    system("pause");
                    }
main()
{
      int x;
      system("cls");
      printf("...::: SEJA BEM VINDO(a) :::... \n");
      printf(" ..: MENU PRINCIPAL :.. \n");
      printf("1 - Formula de Bascara \n");
      printf("2 - Sair \n");
      printf("*********************************** \n");
      scanf("%i", &x);
      switch(x)
      {
               case 1:
                    formula_bascara();
                    system("cls");
                    return main();
                    break;
               case 2:
                    int sair;
                    system("cls");
                    printf("Deseja sair do soft? 1-Sim ou 2-Nao \n");
                    scanf("%i", &sair);
                    if (sair==1)
                    system("exit");
                    else
                    return main();
                    break;
               default:
                       printf("Codigo errado!");
                       break;
                       }
                       }
