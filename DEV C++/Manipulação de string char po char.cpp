#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      // Deve-se digitar os 8 caracteres exatos!!!!
      char Str[8], aux;
      int x;
      printf("Digite a string: \n");
      gets(Str);
      for(x=0;x<4;x++)
      {
                       aux = Str[x];
                       Str[x] = Str[7-x];
                       Str[7-x] = aux;
                       }
      printf("String invertida = %s \n", Str);
      system("pause");
      }
