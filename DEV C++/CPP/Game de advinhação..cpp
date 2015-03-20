#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main()
{
      int magic, guess;
      magic = rand(3); //Gera um número aleatório.
      printf("Advinhe o numero:");
      scanf("%d", &guess);
      if(guess == magic)
      {
               printf("Certo!!");
               printf("%d e o numero! \n", magic);
               }
      else
      {
          printf("Errado!!");
          if(guess>magic)
          {
                         printf("Valor muito alto! \n");
                         printf("O numero correto e: %i \n", magic);
                         }
          else
          {
              printf("Valor muito baixo! \n");
              printf("O numero correto e: %i \n", magic);
              }
          }
      system("pause");
      system("cls");
          }
