#include<stdlib.h>
#include<stdio.h>
#include<iostream>
main ()
{
     int x;
     float sala, aum, sala2, dif;
     char c;
     printf("Exercicio n 10. \n");
     printf(" N |   CARGO       | PERCENTUAL DE AUMENTO \n");
     printf(".......................................... \n");
     printf(" 1 |   Diretor     |       10% \n");
     printf(" 2 |   Engenheiro  |       20% \n");
     printf(" 3 |   Tecnico     |       30% \n");
     printf(" 4 |   Gerente     |       10% \n");
     printf(" 5 |   Analista    |       30% \n");
     printf(" 6 |   Coordenador |       20% \n");
     printf(" 7 |   Outro       |       40% \n");
     printf(".......................................... \n");
     printf(" 8 |    -SAIR-     |       --- \n");
     printf(".......................................... \n");
     printf("Aumento de salaio.. \n");
     printf("Informe seu cargo acima: \n");
     scanf("%i", &x);
     switch (x)
     {
            case 1:{
                     printf("Cargo de Diretor. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.1;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 2:{
                     printf("Cargo de Engenheiro. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.2;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 3:{
                     printf("Cargo de Tecnico. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.3;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 4:{
                     printf("Cargo de Gerente. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.1;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 5:{
                     printf("Cargo de Analista. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.3;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 6:{
                     printf("Cargo de Coordenador. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.2;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 7:{
                     printf("Outro cargo. Informe seu salario: \n");
                     scanf(" %f", &sala);
                     aum = sala*0.4;
                     sala2 = aum+sala;
                     dif = sala2-sala;
                     printf("Voce ganha R$%4.2f \n", sala);
                     printf("Passara a ganhar R$%4.2f \n", sala2);
                     printf("Aumento de R$%4.2f \n", dif);
                     system("pause");
                     system("cls");
                     return main ();
                     break;
                     }
            case 8:{
                     printf("Tem serteza que deseja sair? (s/n) \n");
                     scanf(" %c", &c);
                            if (c=='s')
                            {
                                     return 0;
                                     }
                            else if (c=='n')
                            {
                                 system ("cls");
                                 return main ();
                                 }
                                 break;
                                 }
            default:{
                     printf("Comando incorreto! \n");
                     system("pause");
                     system("cls");
                     printf("Por favor informe um dos cargos do menu: \n");
                     return main ();
                     break;
                     }
                     }
                     }
