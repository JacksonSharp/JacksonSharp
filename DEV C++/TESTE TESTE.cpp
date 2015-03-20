#include<stdio.h>
#include<stdlib.h>
#include<strng.h>
char Letras (char letra[4])
{
     char aux, x;
     for(x=0;x<2;x++)
     {
                     aux = letra[x];
                     letra[x] = letra[2-x];
                     letra[2-x] = aux;
                     }
     printf("Letras digitadas: %s \n", letra);
     }

//************************************************************************

char Numero (char num[4])
{
     char aux, x;
     for (x=0;x<2;x++)
     {
         aux = num[x];
         num[x] = num[2-x];
         num[2-x] = aux;
         }
     printf("Numeros digitados: %s \n", num);
     }
     
//************************************************************************

main ()
{
     char x[4], y[4], x1[4], y1[4];
     int z;
     printf("Digite 4 letra: \n");
     gets(x);
     x1[4] = Letras(x);
     printf("Digite 4 numero: \n");
     gets(y);
     y1[4] = Numero(y);
     printf("Resultado: %s %s", x, y);
     system("pause");
     }
