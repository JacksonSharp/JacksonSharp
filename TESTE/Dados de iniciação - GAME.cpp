#include<stdio.h>
#include<stdlib.h>
#include<string.h>
      char nome[20];
      int idade, sexo, pontos=0, opcao, a, x;
int Opcao_filmes()
{
    system("cls");
    printf("Bem-vindo ao tema 'FILMES'\n\n");
    printf("Vamos ao menu de filmes. \n");
    system("pause");
    system("cls");
    printf("\n\n       ...::: MENU DE FILMES :::... \n\n\n");
    printf("1 - Os Vingadores\n2 - Harry Potter\n3 - O Senhor dos Aneis\n\n\n");
    printf("=======================================================================\n\n");
    printf("Escolha um dos filmes acimda: \n");
    scanf("%i", &a);
    switch(a)
    {
             case 1:
                  system("cls");
                  printf("\n\n       ...::: OS VINGADORES :::... \n\n\n");
                  printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                  system("pause");
                  return Opcao_filmes();
                  break;
             case 2:
                  system("cls");
                  printf("\n\n       ...::: HARRY POTTER :::... \n\n\n");
                  printf("Nosso sistema dispoem de todos os filmes referentes ao Harry Potter.\n\n");
                  printf("Escolha o que mais lhe agrada abaixo:\n HARRY POTTER... \n\n\n");
                  printf("1 - E a Pedra Filosofal;\n\n2 - A Camara Secreta;\n\n3 - O Prisioneiro de Ascabam;\n\n4 - O Calice de Fogo;\n\n5 - A Ordem da Fenix;\n\n6 - O Enigma do Principe;\n\n7 - As Reliqueas da Morte PART-1;\n\n8 - As Reliqueas da Morte PART-2;\n\n\n     9 - VOLTAR AO MENU DE FILMES\n\n\n");
                  printf("=======================================================================\n\n");
                  printf("Escolha um dos filmes: ");
                  scanf("%i", &a);
                  switch(a)
                  {
                           case 1:
                                system("cls");
                                printf("\n\n       ...::: A PEDRA FILOSOFAL :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 2:
                                system("cls");
                                printf("\n\n       ...::: A CAMARA SECRETA :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 3:
                                system("cls");
                                printf("\n\n       ...::: O PRISIONEIRO DE ASCABAM :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 4:
                                system("cls");
                                printf("\n\n       ...::: O CALICE DE FOGO :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 5:
                                system("cls");
                                printf("\n\n       ...::: A ORDEM DA FENIX :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 6:
                                system("cls");
                                printf("\n\n       ...::: O ENIGMA DO PRINCIPE :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 7:
                                system("cls");
                                printf("\n\n       ...::: AS RELIQUEAS DA MORTE part-1 :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 8:
                                system("cls");
                                printf("\n\n       ...::: AS RELIQUEAS DA MORTE part-2 :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 9:
                                return Opcao_filmes();
                                break;
                           default:
                                   system("cls");
                                   printf("\n      ...::: !!! ATENCAO !!! :::... \n\n\n");
                                   printf("=========================================================\n");
                                   printf("              Comando invalido.\n");
                                   printf("           Retornando ao Menu de Filmes.\n\n");
                                   printf("=========================================================\n");
                                   system("pause");
                                   return Opcao_filmes();
                                   break;
                                   }
             case 3:
                  system("cls");
                  printf("\n\n       ...::: O SENHOR DOS ANEIS :::... \n\n\n");
                  printf("Nosso sistema dispoem de todos os filmes referentes ao O Senhor Dos Aneis.\n\n");
                  printf("Escolha o que mais lhe agrada abaixo:\n O SENHOR DOS ANEIS... \n\n\n");
                  printf("1 - A Sociedade do Anel;\n\n2 - As Duas Torres;\n\n3 - O Retorno do Rei;\n\n     4 - Retornar ao Menu de Filmes\n\n\n");
                  printf("=======================================================================\n\n");
                  printf("Escolha um dos filmes: ");
                  scanf("%i", &a);
                  switch(a)
                  {
                           case 1:
                                system("cls");
                                printf("\n\n       ...::: A SOCIEDADE DO ANEL :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 2:
                                system("cls");
                                printf("\n\n       ...::: AS DUAS TORRES :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 3:
                                system("cls");
                                printf("\n\n       ...::: O RETORNO DO REI :::... \n\n\n");
                                printf("No momento nao temos perguntas para este filme!\n\nPor favor escolha outro!\n\n");
                                system("pause");
                                return Opcao_filmes();
                                break;
                           case 4:
                                return Opcao_filmes();
                                break;
                           default:
                                   system("cls");
                                   printf("\n      ...::: !!! ATENCAO !!! :::... \n\n\n");
                                   printf("=========================================================\n");
                                   printf("              Comando invalido.\n");
                                   printf("           Retornando ao Menu de Filmes.\n\n");
                                   printf("=========================================================\n");
                                   system("pause");
                                   return Opcao_filmes();
                                   break;
                                   }
                                   }
}
int Opcao_seriados()
{
    system("cls");
    printf("Bem-vindo ao tema 'SERIADOS!'\n\n");
    printf("Vamos ao menu de seriados. \n");
    system("pause");
    system("cls");
    printf("\n\n       ...::: MENU DE SERIADOS :::... \n\n\n");
}
int Opcao_desenhos()
{
    system("cls");
    printf("Bem-vindo ao tema 'DESENHOS!'\n\n");
    printf("Vamos ao menu de desenhos. \n");
    system("pause");
    system("cls");
    printf("\n\n       ...::: MENU DE DESENHOS :::... \n\n\n");
}
void Regras_jogo()
{
     printf(" \n");
     printf("------------------------------------------------------------------- \n");
     printf(" \n");
     printf("Bem-vindo as REGRAS DO JOGO! \n\n");
     printf("Este e um jogo de perguntas e respostas!\n\nPortanto, o jogador tera que escolher apenas uma das 3 alternativas.\n\nFique atento! Se voce escolher um numero diferente das alternativas,\nvoce sera desclassificado e o jogo sera finalizado!\n\n");
     printf(" \n");
     printf("------------------------------------------------------------------- \n");
     printf(" \n");
}
int Menu_principal()
{
    system("cls");
    printf("\n ..:: Escolha um dos temas abaixo jogador "); printf(nome); printf(" ::.. \n\n");
    printf("    ..::1 - FILMES::.. \n\n    ..::2 - SERIADOS::.. \n\n    ..::3 - DESENHOS::.. \n\n    ..::4 - Regras do Jogo::.. \n\n    ..::5 - SAIR::..\n\n");
    scanf("%i", &opcao);
    switch(opcao)
    {
                 case 1:
                      {
                      printf(" ...::: FILMES :::... \n\n");
                      pontos=Opcao_filmes();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 2:
                      {
                      printf(" ...::: SERIADOS :::... \n\n");
                      pontos=Opcao_seriados();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 3:
                      {
                      printf(" ...::: DESENHOS :::... \n\n");
                      pontos=Opcao_desenhos();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 4:
                      {
                      system("cls");
                      printf(" ...::: REGRAS DO JOGO :::... \n\n");
                      Regras_jogo();
                      system("pause");
                      return Menu_principal();
                      break;
                      }
                 case 5:
                      {
                            printf("Tem certeza que deseja sair? \n\n");
                            printf("1 = SIM   OU   2 = NAO\n\n-->  ");
                            scanf("%i", &x);
                            if (x==1)
                            system("exit");
                            else if (x==2)
                            return Menu_principal();
                            else if ((x!=1) || (x!=2))
                            printf("Comando Incorreto!\n\nFinalizando O Programa...\n\n\n");
                            system("pause");
                            system("cls");
                            break;
                             }        
                 default:
                      {
                      printf("ATENCAO!!! \n\n");
                      printf("Numero invalido! Finalizando o jogo!");
                      return pontos;
                      system("pause");
                      break;
                      }
                      }
}
//====================================================================================================================
//====================================================================================================================

// MENU DO OPERADOR - ACESSO À BIOS DO JOGO - APENAS PESSOAS AUTORIZADAS!!!!
int Menu_operador()
{
    system("cls");
    printf("\n      .....::::: MENU DO OPERADOR ::::::..... \n\n\n");
    printf("Escolha um dos temas abaixo operador ");
    printf(nome);
    printf(": \n\n");
    printf("1 - FILMES \n2 - SERIADOS \n3 - DESENHOS \n4 - Regras do Jogo \n\nMenu do operador:\n\n5 - DADOS DO SISTEMA ONLINE\n\n6 - ACESSO AO DESLIGAMENTO DO SISTEMA\n\n7 - ACESSO AOS SERVIDORES DO SISTEMA\n\n");
    scanf("%i", &opcao);
    switch(opcao)
    {
                 case 1:
                      {
                      printf(" ...::: FILMES :::... \n\n");
                      pontos=Opcao_filmes();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 2:
                      {
                      printf(" ...::: SERIADOS :::... \n\n");
                      pontos=Opcao_seriados();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 3:
                      {
                      printf(" ...::: DESENHOS :::... \n\n");
                      pontos=Opcao_desenhos();
                      return pontos;
                      system("pause");
                      break;
                      }
                 case 4:
                      {
                      system("cls");
                      printf(" ...::: REGRAS DO JOGO :::... \n\n");
                      Regras_jogo();
                      system("pause");
                      return Menu_principal();
                      break;
                      }
                 case 5:
                      {
                            printf("...::: DADOS DO SISTEMA ONLINE :::...\n\n\n");
                            system("pause");
                            system("cls");
                            printf("ATENCAO!!! \nAcesso do operador!\n\n");
                            system("pause");
                            system("cls");
                            system("ipconfig");
                            system("pause");
                            return Menu_operador();
                            break;
                             }        
                 case 6:
                      {
                      printf("...::: ACESSO AO DESLIGAMENTO DO SISTEMA :::...\n\n\n");
                      system("pause");
                      system("cls");
                      printf("ATENCAO!!! \nAcesso do operador!\n\n");
                      system("pause");
                      system("cls");
                      system("Shutdown -s -t 10 -c -n\\Jackson-PC");
                      system("pause");
                      return Menu_operador();
                      break;
                      }
                 case 7:
                      {
                      printf("...::: ACESSO AOS SERVIDORES DO SISTEMA :::...\n\n\n");
                      system("pause");
                      system("cls");
                      printf("ATENCAO!!! \nAcesso do operador!\n\n");
                      system("pause");
                      system("cls");
                      system("Net View");
                      system("pause");
                      return Menu_operador();
                      break;
                 default:
                      {
                      printf("ATENCAO!!! \n\n");
                      printf("Numero invalido! Finalizando o jogo!");
                      return pontos;
                      system("pause");
                      break;
                      }
                      }
}
//====================================================================================================================
//====================================================================================================================

// FIM DO MENU DO OPERADOR - ACESSO À BIOS DO JOGO - APENAS PESSOAS AUTORIZADAS!!!!

//====================================================================================================================
//====================================================================================================================
}
main()
{
      printf("\n     ...::: GAME DE PERGUNTAS :::... \n\n");
      printf("   Precisamos de alguns dados para iniciar o game! \n");
      printf(" \n");
      printf("==========================================================\n\n");
      printf("OBS: Maximize sua tela antes de iniciar o game! \n\n");
      printf("==========================================================\n\n");
      system("pause");
      system("cls");
      printf("Digite seu nome: ");
      gets(nome);
      printf(" \n\n");
      printf("Digite sua idade ");
      printf(nome);
      printf(": ");
      scanf("%i", &idade);
      printf(" \n\n");
      if (idade==000)
      {
      printf("         ||||||||||||||||||||||||||||||||||||\n");
      printf("     |||||||| Seja Bem-vindo Operador!!! |||||||| \n\n");
      system("pause");
      Menu_operador();
      }
      system("cls");
      printf("==========================================================\n\n");
      printf("   \nEntao seu nome e ");
      printf(nome);
      printf(" e tem %i",idade);
      printf(" anos de idade. \n\n\n");
      printf("==========================================================\n\n");
      printf(" \n");
      printf("Digite '1' para masculino OU '2' para feminino: \n\n");
      scanf ("%i", &sexo);
      switch(sexo)
      {
                  case 1:
      printf("      \nVAMOS AO JOGO! Senhor ");
      printf(nome);
      printf("! \n\n");
      system("pause");
      pontos=Menu_principal();
      system("cls");
      printf("Obrigado por jogar! \n\n");
      printf("Pontos totais = %i \n\n", pontos);
      system("pause");
      break;
                 case 2:
      printf("Ola! Se voce e garota tenho que moderar minhas palavras! rs' \n\n");
      printf("VAMOS AO JOGO! \n\n");
      pontos=Menu_principal();
      system("cls");
      printf("Obrigado por jogar!\n\n");
      printf("Pontos totais = %i \n\n", pontos);
      system("pause");
      break;
      default:system("cls");
              printf("Por favor jogador ");
              printf(nome);
              printf(". Digite apenas 1 ou 2! \n\n");
              printf("Digite '1' para masculino\n \n OU \n \n'2' para feminino: \n\n");
      scanf ("%i", &sexo);
      switch(sexo)
      {
                  case 1:
                       system("cls");
      printf("Se vc e homem poderemos falar sobre qualquer coisa! kkkkk.. \n\n");
      printf("VAMOS AO JOGO! Mas nao cometa esse tipo de erro novamente!!!\n\n");
      pontos=Menu_principal();
      printf("Obrigado por jogar!");
      printf("Pontos totais = %i", pontos);
      break;
                 case 2:
                      system("cls");
      printf("Ola! Se voce e garota tenho que moderar minhas palavras! rs' \n\n");
      printf("VAMOS AO JOGO! Mas nao cometa esse tipo de erro novamente!!!\n\n");
      pontos=Menu_principal();
      printf("Obrigado por jogar!");
      printf("Pontos totais = %i", pontos);
      break;
      default:{
               printf("Caro jogador ");
               printf(nome);
               printf(", nao gostei da sua conduta! Encerrarei o jogo aqui! \n\n");
      }
      }
      system("pause");
}
}
