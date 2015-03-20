#include<stdio.h>
#include<stdlib.h>
main()
{
      float k, p, r;
      printf("Exercicio n 08. \n");
      printf("Defina o peso do prato em gramas: \n");
      printf("Kg = ");
      scanf("%f", &p);
      k = 12.00/1000;
      r = p * k;
      printf("Voce pagara R$%4.2f \n", r);
      system("pause");
      }
      
