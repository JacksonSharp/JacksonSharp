#include<stdio.h>
#include<stdlib.h>
void linha (int x)
{
     int i;//Variável local..
     for (i=0;i<=x; i++)
     printf("_");
     }
main()
{
      int i;//Variável local..
      printf("Digite um numero: \n");
      scanf("%i", &i);
      linha(i);
      printf("\n \n%i \n \n", i);
      system("pause");
      system("cls");
      return main();
      }
