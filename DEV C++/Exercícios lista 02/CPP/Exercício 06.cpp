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
             /*Caso o valor da variavel char y seja m então
             entrará com a formula do caso homem*/
             
      case 'm': printf("Informe sua altura: \n");
      scanf("%f", &x);
      homem = (72.7*x)-58;
      printf("Peso ideal= %4.2fKg \n", homem);
      system("pause");
      system("cls");
      return main ();
      break;
      
            /*Caso o valor da variavel char y seja f então
            entrará a formula da mulher.*/
      
      case 'f': printf("Informe sua altura: \n");
      scanf("%f", &x);
      mulher = (62.1*x)-44.7;
      printf("Peso ideal= %4.2fKg \n", mulher);
      system("pause");
      system("cls");
      return main ();
      break;
      
            /*Caso o valor da variável char y seja s então
            a opção de sair/fechar software será ativada
            dando então ao usuário a opção de terminar a(s)
            operações, ou é claro de escolher a opção n 
            (não sair do programa) e assim voltando ao inicio
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
            
            /*Porém se a letra não corresponder com os
            casos acima (m ou f) então entrará o comando
            abaixo (defaut) o valor padrão, imprimindo na
            tela a mensagem de "Comando inválido!" e depois
            apaga tudo na tela e depois retorna ao inicio 
            do software.*/
            
      default: printf("Comando invalido!");
      system("cls");
      return main();
      break;
      }
      }
