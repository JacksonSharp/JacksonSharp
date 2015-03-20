#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      int x, numero;
      printf("\n\n     ...:::BEM VINDO:::... \n\n\n");
      printf("Softwere de desligaento do sistema. \n\n");
      printf("Precisamos antes saber qual o IP do seu computador: \n");
      system("ipconfig");
      printf("Digite abaixo o Endereço IPv4: \n");
      scanf("%i", &numero);
      system("cls");
      printf("Escolha uma das opções abaixo: \n\n");
      printf("DESLIGAR EM...\n");
      printf("1 - 00:10 seg\n2 - 01:00 min\n3 - 03:00 min\n4 - 05:00 min\n5 - 10:00 min\n6 - 30:00 min\n7 - 60:00\n\n\n");
      scanf("%i", &x);
      switch(x)
      {
               case 1:
                    printf("Desligar em 10 segundos \n");
                    system("shutdown -s -t 10 -c \"Desligar em 10 segundos\" -m \\%i", numero);
                    break;
               case 2:
                    printf("Desligar em 60 segundos \n");
                    system("shutdown -s -t 60 -c \"Desligar em 60 segundos\" -m \\%i", numero);
                    break;     
               case 3:
                    printf("Desligar em 3 minutos \n");
                    system("shutdown -s -t 180 -c \"Desligar em 3 minutos\" -m \\%i", numero);
                    break;
               case 4:
                    printf("Desligar em 5 minutos \n");
                    system("shutdown -s -t 300 -c \"Desligar em 5 minutos\" -m \\%i", numero);
                    break;
               case 5:
                    printf("Desligar em 10 minutos \n");
                    system("shutdown -s -t 600 -c \"Desligar em 10 minutos\" -m \\%i", numero);
                    break;
               case 6:
                    printf("Desligar em 30 minutos \n");
                    system("shutdown -s -t 1800 -c \"Desligar em 30 minutos\" -m \\%i", numero);
                    break;
               case 7:
                    printf("Desligar em 60 minutos \n");
                    system("shutdown -s -t 3600 -c \"Desligar em 60 minutos\" -m \\%i", numero);
                    break;
               default:
                       printf("Comando inválido tente novamente!!!");
                       return main();
                       break;
                       }
                       }
