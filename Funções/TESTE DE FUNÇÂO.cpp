#include<stdio.h>
#include<stdlib.h>
float produto_interno(float x, float y)
{
     //float a[5], b[5];
     float result;
     printf("O valor de x = %5.3f \nO valor de y = %5.3f", x, y);
     printf(" \n");
     //EXEMPLO ABAIXO!!!!
     result=x+y; //ANOTAÇÂO: Coloquem a fórmula aqui!!!
     return result;
 }    
main()
{
      float x, y, result;
      printf("Digite dois numeros: \n");
      scanf("%f %f", &x, &y );
      result=produto_interno(x, y);
      printf("Resultado: %5.3f \n", result);
      system("pause");
      }
