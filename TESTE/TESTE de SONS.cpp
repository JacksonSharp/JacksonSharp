#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
void EsperaEnter()
{
     int tecla;
     printf("Pressione ENTER!\n");
     do
     {
                       tecla = getch();
                       if (tecla !=13)
                       {
                             sound(700);
                             delay(10);
                             nosound();
                             }
                             }
                             while (tecla != 13);
                             }
main()
{
      EsperaEnter();
      system("puse");
      }
