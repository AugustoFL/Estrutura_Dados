//
// Created by Afonso & Augusto on 24/03/2025.

#include <cstdio>
#include <locale.h>
#include <string.h>
#include <thread>
#include <string>

/**
 * Criando a estrutura para a pessoa
 */
typedef struct {

  char nome[50];
  char cpf[11];


} Pessoa;

/**
 * Criando a estrutura para a data
 */
typedef struct {

  int dia, mes, ano, hora_prevista;

  } Data;

/**
 * Criando enums para o tipo de passagem e locais
 */
typedef enum tipoPassagem{ normal, meia, especial };
typedef enum locais { Assis, São_Paulo, Bauru, Marília, São_Pedro_do_Turvo, Osasco };

/**
 * Criando a estrutura para o destino
 */
typedef struct {

  locais loc_origem;
  locais loc_destino;

} Destino;

/**
 * Criando a estrutura para a passagem, um total de todas as outras estruturas e enums
 */
typedef struct {

  double valor_total;
  int quantidade;
  Data data;
  int assento;
  char tipo;
  Destino destino;
  Pessoa pessoa;

  } Passagem;


  int main () {

setlocale(LC_ALL, "Portuguese");

Passagem pass;
tipoPassagem tipo;

int opc = 0;
double desconto = 0;

    printf("Bem vindo ao programa de compra e venda de passagens.\n");
    printf("Qual o seu nome?");
    fgets(pass.pessoa.nome, sizeof(pass.pessoa.nome), stdin);
    pass.pessoa.nome[strcspn(pass.pessoa.nome, "\n")] = '\0';
    printf("Digite seu CPF:  ");
    fgets(pass.pessoa.cpf, sizeof(pass.pessoa.cpf), stdin);
    pass.pessoa.cpf[strcspn(pass.pessoa.cpf, "\n")] = '\0';
    /*
     *if (strlen(pass.pessoa.cpf) < 10 || strlen(pass.pessoa.cpf) > 10) {
      printf("CPF inválido!\n");
      return 0;
    }
    DANDO ERRO E INTERFERENCIA, NÃO DEU PARA ARRUMAR A TEMPO
    */

    printf("Qual tipo de passagem?\n" );
    printf("-------------------------------------------\n");
    printf("| Tipo            | Código | Desconto(%%) |\n");
    printf("-------------------------------------------\n");
    printf("| Normal          |   1    | -----------  |\n");
    printf("------------------------------------------\n" );
    printf("| Meia(estudante) |   2    |  50%%         |\n" );
    printf("------------------------------------------\n" );
    printf("| Especial        |   3    |  100%%       |\n" );
    printf("| (idosos e PcD)  |        |              |\n");
    printf("------------------------------------------\n" );
    printf("Digite o codigo: ");
    scanf("%d", &opc);
    switch (opc) {
      case 1: pass.tipo = normal; desconto = 1; break;
      case 2: pass.tipo = meia; desconto = 0.5; break;
      case 3: pass.tipo = especial; desconto = 0; break;
      default:
        printf("Código inválido!\n");
      return 1;
    }



  /*
    printf("Digite o local de origem:");
    printf("---------------------\n");
    printf("|      Destinos      |\n");
    printf("---------------------\n");
    printf("|       Assis        |\n");
    printf("----------------------\n" );
    printf("|     Sao Paulo      |\n" );
    printf("----------------------\n" );
    printf("|       Bauru        |\n" );
    printf("----------------------\n" );
    printf("|      Marilia       |\n" );
    printf("----------------------\n" );
    printf("| Sao Pedro do Turvo |\n" );
    printf("----------------------\n" );
    printf("|       Osasco       |\n" );
    printf("----------------------\n" );
    printf("Digite o código: ");
    scanf("%d", &pass.destino.loc_origem);
                                          */

    printf("Digite o local de destino:\n");
    printf("----------------------------------------------\n");
    printf("|      Destinos      | Valor (R$)  |  Codigo |\n");
    printf("----------------------------------------------\n");
    printf("|       Assis        | 27,20       |    1    |\n");
    printf("---------------------------------------------|\n" );
    printf("|     Sao Paulo      | 88,30       |    2    |\n" );
    printf("---------------------------------------------|\n" );
    printf("|       Bauru        | 30,50       |    3    |\n" );
    printf("---------------------------------------------|\n" );
    printf("|      Marilia       | 25,00       |    4    |\n" );
    printf("---------------------------------------------|\n" );
    printf("| Sao Pedro do Turvo | 13,50       |    5    |\n" );
    printf("---------------------------------------------|\n" );
    printf("|       Osasco       | 75,10       |    6    |\n" );
    printf("---------------------------------------------|\n" );
    printf("Digite o código: ");
    int opcDesti;
    scanf("%d", &opcDesti );
    pass.destino.loc_destino = (locais)(opcDesti - 1);
    printf("Quantas passagens quer comprar?: ");
    scanf("%d", &pass.quantidade);
switch (pass.destino.loc_destino) {
  case Assis:
    pass.valor_total = 27.20 * pass.quantidade * desconto;
  break;
  case São_Paulo:
    pass.valor_total = 88.30 * pass.quantidade * desconto;
  break;
  case Bauru:
    pass.valor_total = 30.50 * pass.quantidade * desconto;
  break;
  case Marília:
    pass.valor_total = 25 * pass.quantidade * desconto;
  break;
  case São_Pedro_do_Turvo:
    pass.valor_total = 13.50 * pass.quantidade * desconto;
  break;
  case Osasco:
    pass.valor_total = 75.10 * pass.quantidade * desconto;
  break;
  default:
    pass.valor_total = 0;
    printf("Código invalido!\n");
  break;
}

    printf("Digite o dia da viagem: ");
    scanf("%d", &pass.data.dia);
if (pass.data.dia < 1 || pass.data.dia > 31) {
    printf("Dia invalido.");
    return 1;
}
    printf("Digite o mes da viagem: ");
    scanf("%d", &pass.data.mes);
if (pass.data.mes < 1 || pass.data.mes > 12) {
      printf("Mes invalido.");
      return 1;
}
    printf("Digite o ano da viagem: ");
    scanf("%d", &pass.data.ano);
if (pass.data.ano < 2025) {
  printf("Ano invalido.");
  return 1;
}

    printf("Escolha o seu assento. ( 1 - 60): ");
    scanf("%d", &pass.assento);

    if (pass.assento < 1 || pass.assento > 60) {
      printf("Número de assento inválido!\n");
      return 1;
    }

/*
    printf("\nResumo da Compra:\n");
    printf("Nome: %s\n", pass.pessoa.nome);
    printf("CPF: %s\n", pass.pessoa.cpf);
    printf("Tipo de passagem: %s\n", (pass.tipo == normal) ? "Normal" : (pass.tipo == meia) ? "Meia" : "Especial");
    printf("Destino: %d\n", pass.destino.loc_destino + 1);
    printf("Quantidade: %d\n", pass.quantidade);
    printf("Valor total: R$%.2f\n", pass.valor_total);
    printf("Data: %02d/%02d/%04d\n", pass.data.dia, pass.data.mes, pass.data.ano);
    printf("Assento: %d\n", pass.assento);
*/
    using namespace std::this_thread;
    using namespace std::chrono;
    printf("Imprimindo...");
    printf("\n****************************************\n");
    sleep_for(seconds(2));
    printf("*         BILHETE DE PASSAGEM          *\n");
    sleep_for(seconds(1));
    printf("****************************************\n");
    sleep_for(seconds(1));
    printf("* Nome: %-47s *\n", pass.pessoa.nome);
    sleep_for(seconds(1));
    printf("* CPF: %-31s \n", pass.pessoa.cpf);
    sleep_for(seconds(1));
    printf("* Tipo de passagem: %-19s*\n", (pass.tipo == normal) ? "Normal" : (pass.tipo == meia) ? "Meia" : "Especial");
    sleep_for(seconds(1));
    printf("* Destino: %-28d*\n", pass.destino.loc_destino + 1);
    sleep_for(seconds(1));
    printf("* Quantidade: %-25d*\n", pass.quantidade);
    sleep_for(seconds(1));
    printf("* Data: %02d/%02d/%04d %-20s*\n", pass.data.dia, pass.data.mes, pass.data.ano, "");
    sleep_for(seconds(1));
    printf("* Assento: %-28d*\n", pass.assento);
    sleep_for(seconds(1));
    printf("****************************************\n");
    sleep_for(seconds(1));


    return 0;

    };