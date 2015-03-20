#include<stdio.h>
#include<stdlib.h>
#include<iostream>
/*Função co passagem de parâmetro..

Existe a possibilidade de , no momento da chamada da função, a mesma
transportar uma variável que será uilizada dentro da função.

*******************************************************************************

A variável 'a' é criada e lida no programa principal. Quando faço a chamada da
função area_quadrado, passo como parâmetro o valor da variável 'a' que será
utilizada no corpo da função.
*/
void area_quadrada (float l) //Função area_quadrada com parâmetro (float l)
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
     area_quadrada(a);/*Chamada da função area_quadrada, passando o valor de
                          'a' para a variável da função 'l' que é o parâmetro
                          da função.
                          */
     system("pause");
                          }
