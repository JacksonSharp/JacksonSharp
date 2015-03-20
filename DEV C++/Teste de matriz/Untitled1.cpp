#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{int x;
     printf("...:::Menu Principal:::... \n");
     printf("Escolha uma das opcoes abaixo: \n");
     printf("1-SOMA..................2-SUBTRACAO \n");
     printf("3-MULTIPLICACAO.........4-DIVISAO \n");
     printf("--------------------------------- \n");
     scanf("%i", &x);
     switch(x)
     {
              case 1:
                   {float soma1, soma2, resultado;
                   printf("Caculo de soma. \n");
                   printf("Digite um numero: \n");
                   scanf("%i ", &soma1);
                   printf("Digite outro numero: \n");
                   scanf("%i ", &soma2);
                   resultado = soma1 + soma2;
                   printf("Resultado: %f", resultado);
                   system("pause");
                   break;
                   }
              case 2:
                   {float subtracao1, subtracao2, resultado2;
                   printf("Caculo de subtração. \n");
                   printf("Digite um numero: \n");
                   scanf("%i", &subtracao1);
                   printf("Digite outro numero: \n");
                   scanf("%i", &subtracao2);
                   resultado2=subtracao1-subtracao2;
                   printf("Resultado: %f", resultado2);
                   system("pause");
                   break;
                   }
              case 3:
                   {float multi1, multi2, resultado3;
                   printf("Caculo de multiplicacao. \n");
                   printf("Digite um numero: \n");
                   scanf("%i", &multi1);
                   printf("Digite outro numero: \n");
                   scanf("%i", &multi2);
                   resultado3=multi1-multi2;
                   printf("Resultado: %f", resultado3);
                   system("pause");
                   break;
                   }
              case 4:
                   {float divid1, divid2, resultado4;
                   printf("Caculo de multiplicacao. \n");
                   printf("Digite um numero: \n");
                   scanf("%i", &divid1);
                   printf("Digite outro numero: \n");
                   scanf("%i", &divid2);
                   resultado4=divid1-divid2;
                   printf("Resultado: %f", resultado4);
                   system("pause");
                   break;
                   }
              default:
                      {
                      printf("Comando invalido, tente novamente! \n");
                      system("pause");
                      break;
                      }
                      }
                      }
