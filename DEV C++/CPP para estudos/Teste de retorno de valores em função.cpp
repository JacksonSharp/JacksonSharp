#include<stdio.h>
#include<stdlib.h>
int soma_numero(int a, int b)
{
    int s=0, x;
    if (a<b)
    for(x=a+1;x<b;x++)
    s=s+x;
    else
    for (x=b+1;x<a;x++)
    s=s+x;
    return s;
}
main()
{
      int num1, num2, result_final;
      printf("Digite dois numeros: \n");
      scanf("%i %i", &num1, &num2);
      result_final = soma_numero(num1, num2);
      printf("Resultado: %i", result_final);
      system("pause");
      }
