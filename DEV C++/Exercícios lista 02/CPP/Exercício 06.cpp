#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main()
{
      float x, homem, mulher;
      char y;
      printf("Exercicio n 06. \n");
      printf("Informe seu sexo: (m/f) \n");
      printf("Ou pressione as teclas S(maiusculo) + ENTER para sair! \n");
      scanf(" %c", &y);//Define o valor da variavel char y.
      switch (y)//Executa o valor da variavel char y.
      {
             /*Caso o valor da variavel char y seja m ent�o
             entrar� com a formula do caso homem*/
             
      case 'm': printf("Informe sua altura: \n");
      scanf("%f", &x);
      homem = (72.7*x)-58;
      printf("Peso ideal= %4.2fKg \n", homem);
      system("pause");
      system("cls");
      return main ();
      break;
      
            /*Caso o valor da variavel char y seja f ent�o
            entrar� a formula da mulher.*/
      
      case 'f': printf("Informe sua altura: \n");
      scanf("%f", &x);
      mulher = (62.1*x)-44.7;
      printf("Peso ideal= %4.2fKg \n", mulher);
      system("pause");
      system("cls");
      return main ();
      break;
      
            /*Caso o valor da vari�vel char y seja s ent�o
            a op��o de sair/fechar software ser� ativada
            dando ent�o ao usu�rio a op��o de terminar a(s)
            opera��es, ou � claro de escolher a op��o n 
            (n�o sair do programa) e assim voltando ao inicio
            do programa.*/
      
      case 'S': printf("Tem certeza que deseja sair? (s/n) \n");
      scanf(" %c", &y);
              case 's': return 0;
              break;
              case 'n': system ("cls");
              printf("Retornado ao inicio! \n");
              return main ();
              break;
              return main ();
            
            /*Por�m se a letra n�o corresponder com os
            casos acima (m ou f) ent�o entrar� o comando
            abaixo (defaut) o valor padr�o, imprimindo na
            tela a mensagem de "Comando inv�lido!" e depois
            apaga tudo na tela e depois retorna ao inicio 
            do software.*/
            
      default: printf("Comando invalido!");
      system("cls");
      return main();
      break;
      }
      }
