#include<stdio.h>
#include<stdlib.h>
#include<iostream>
/*Declara��o de Fun��es:
Um programa em linguagem C, uma linguagem estruturada, � interpretado de forma
sequencial, para que o programa principal reconhe�a e possa usar uma determinada
fun��o ela  deve ser definida antes de ser utilizada. Se a fun��o n�o for
defnida antes de ser utilizada ela deve, no m�nimo, ser declarada para que o
programa possa "entender" que esta fun��o existir� no seu programa.
*/
void area_quadrado (float l);//Declara��o de uma fun��o!!!
main ()
{
     float a;
     printf("Entre com o lado do quadrado: \n");
     scanf("%f", &a);
     area_quadrado(a);
     }
void area_quadrado (float l)// Conte�do da fun��o declarada anteriormente acima!
{
     float area;
     area = l*l;
     printf("A area do quadrado e= %4.2f metros quadrados. \n", area);
     system("pause");
     }
