#include<stdio.h>
#include<stdlib.h>
main()
{
      int x, y, z, r, a;
      
      printf("Exericio n 10. \n");
      printf("Digite um numero de 3 algarismos:");
      scanf("%i", &x);
      y = x/100;
      z = x%100;
      a = (z-(z%10))/10;
      r = z%10;
      printf("Centena = %i \nDezena = %i\nUnidade = %i\n", y, a, r);
      system("pause"); 
      }
