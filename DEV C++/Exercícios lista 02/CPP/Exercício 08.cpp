#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
main()
{
      int x, e=2;
      char y;
      do{
      printf("Exercicio n 08. \n");
      printf("Escolha um mes abaixo: \n");
      printf("1, 2, 3, 4, 5, 6, ");
      printf("7, 8, 9, 10, 11, 12 \n");
      printf("13 - para sair! \n");
      scanf("%i", &x);
      switch (x)
      {
      case 1: printf("JANEIRO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 2: printf("FEVEREIRO: \n");
      printf("Possui 28 dias. \n");
      break;
      case 3: printf("MARCO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 4: printf("ABRIL: \n");
      printf("Possui 30 dias. \n");
      break;
      case 5: printf("MAIO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 6: printf("JUNHO: \n");
      printf("Possui 30 dias. \n");
      break;
      case 7: printf("JULHO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 8: printf("AGOSTO: \n");
      printf("Possui 30 dias. \n");
      break;
      case 9: printf("SETEMBRO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 10: printf("OUTUBRO: \n");
      printf("Possui 30 dias. \n");
      break;
      case 11: printf("NOVEMBRO: \n");
      printf("Possui 31 dias. \n");
      break;
      case 12: printf("DEZEMBRO: \n");
      printf("Possui 30 dias. \n");
      break;
      case 13: printf("Tem certeza que deseja sair? (s/n) \n");
      scanf(" %c", &y);
      switch (y)
      {
             case 's': return 0;
             break;
             case 'n': system("cls");
             return main ();
             break;
             default: printf("Opcao incorreta! \n");
             }
      default: printf("Opcao incorreta! \n");
}
system("pause");
system("cls");
}

while(e>0);
      system("pause");
      }
