#include<stdio.h>
#include<stdlib.h>
main ()
{
     int list, exerc;
     printf("Bem vindo ao Menu Principal. \n");
     printf("Abaixo esta as listas de exercicios referentes ao terceiro BI. \n");
     printf("Escolha uma das listas abaixo: \n");
     printf("1 - Lista 01; \n");
     printf("2 - Lista 02; \n");
     printf("3 - Lista 03; \n");
     printf("4 - Lista 04; \n");
     printf("5 - Lista 05; \n");
     printf("6 - Lista 06; \n");
     scanf("%i", &list);
     switch (list)
     {
            case 1:
                 {
                       printf("Bem vindo a lista 01. \n");
                       printf("Abaixo esta a lista dos exercicios. \n");
                       printf("Escolha o exercicio de sua preferencia: \n");
                       printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10. \n");
                       scanf ("%i", &exerc);
                       switch (exerc)
                       {
                              case 1:
                                   {
                                            printf("Exercicio numero 1: \n");
                                            printf("ENUNCIADO: \n");
                                            printf("\"1.Faca um algoritmo que receba 3 numeros \n calcule e mostre a multiplicacao desses numeros.\" \n");
                                            printf(" \n");
                                            printf("!Agora voce pode comparar sua resposta com nosso gabarito: \n");
                                            printf(" \n");
                                            //Abaixo est� o algoritmo em linguagem C, exerc�cio 01 Lista 01
                                            printf("#include<stdio.h> \n"); //Biblioteca
                                            printf("#include<stdlib.h> \n"); //Biblioteca
                                            printf(" \n");
                                            printf("main() \n"); //Fun��o "main ()"
                                            printf("{ \n"); //Abre chaves
                                            printf(" \n");
                                            printf("\\\\Determinacao das variaveis. \n"); // coment�rio
                                            printf(" \n");
                                            printf("int x; \n"); //Vari�vel
                                            printf("int y; \n"); //Vari�vel
                                            printf("int z; \n"); //Vari�vel
                                            printf("int r; \n"); //Vari�vel
                                            printf(" \n");
                                            printf("\\\\Interface. \n"); //Coment�rio
                                            printf("printf(\"Exercicio n 01. \ n\"); \n"); //printf 01. Exercicio n 01
                                            printf("printf(\"Digite 3 numeros:\"); \n"); //printf 02. Digite 3 numeros
                                            printf(" \n");
                                            printf("\\\\Determinacao dos valores das variaveis. \n"); //Coment�rio
                                            printf("scanf(\"%i %i %i\", &x, &y, &z); \n"); //scanf 01. 3 vari�veis
                                            printf(" \n");
                                            printf("\\\\valor da variavel de resposta. \n"); //Coment�rio
                                            printf("r=x*y*z; \n"); //Defini��o do valor da vari�vel 'r'
                                            printf(" \n");
                                            printf("\\\\Impressao da resposta na tela. \n"); //Coment�rio
                                            printf("printf(\"Resultado: %i * %i * %i = %4.2i \n\", x, y, z, r); \n"); //printf 03. Resultado. Impress�o do resultado na tela
                                            printf(" \n");
                                            printf("\\\\Pausa a execu��o do software. \n"); //Coment�rio
                                            printf("system(\"pause\"); \n"); //Comando 'system("pause")' da biblioteca 'stdlib.h'
                                            printf(" \n");
                                            printf("} \n"); //Fecha chaves
                                            printf(" \n");
                                            //Fim do algoritmo. Fim do exercicio 01 da Lista 01 em linguagem C.
                                            break;
                                            }
                                            }
                                            }
                                            }
                                            system("pause");
                                            }
