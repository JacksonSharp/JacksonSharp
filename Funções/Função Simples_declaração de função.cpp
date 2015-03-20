#include<stdio.h>
#include<stdlib.h>
#include<iostream>
/*Declaração de Funções:
Um programa em linguagem C, uma linguagem estruturada, é interpretado de forma
sequencial, para que o programa principal reconheça e possa usar uma determinada
função ela  deve ser definida antes de ser utilizada. Se a função não for
defnida antes de ser utilizada ela deve, no mínimo, ser declarada para que o
programa possa "entender" que esta função existirá no seu programa.
*/
void area_quadrado (float l);//Declaração de uma função!!!
main ()
{
     float a;
     printf("Entre com o lado do quadrado: \n");
     scanf("%f", &a);
     area_quadrado(a);
     }
void area_quadrado (float l)// Conteúdo da função declarada anteriormente acima!
{
     float area;
     area = l*l;
     printf("A area do quadrado e= %4.2f metros quadrados. \n", area);
     system("pause");
     }
