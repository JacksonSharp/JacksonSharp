#include<stdio.h>
#include<stdlib.h>
#include<iostream>
/*Fun��o co passagem de par�metro..

Existe a possibilidade de , no momento da chamada da fun��o, a mesma
transportar uma vari�vel que ser� uilizada dentro da fun��o.

*******************************************************************************

A vari�vel 'a' � criada e lida no programa principal. Quando fa�o a chamada da
fun��o area_quadrado, passo como par�metro o valor da vari�vel 'a' que ser�
utilizada no corpo da fun��o.
*/
void area_quadrada (float l) //Fun��o area_quadrada com par�metro (float l)
{
     float area;
     area = l*l;
     printf("A area do quadrado e = %4.2f metros quadrados \n", area);
     }
main ()//Inicio do programa...
{
     float a;
     printf("Entre com o valor de um lado do quadrado: \n");
     scanf("%f", &a);
     area_quadrada(a);/*Chamada da fun��o area_quadrada, passando o valor de
                          'a' para a vari�vel da fun��o 'l' que � o par�metro
                          da fun��o.
                          */
     system("pause");
                          }
