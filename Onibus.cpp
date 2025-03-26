//
// Created by Afonso & Augusto on 24/03/2025.
//

#include <clocale>
#include <cstdio>

typedef struct {

  int dia, mes, ano, hora_prevista;

  } Data;


typedef enum tipoPassagem{ normal, meia, especial };
typedef enum locais { Assis, São_Paulo, Bauru, Marília, São_Pedro_do_Turvo, Osasco };

typedef struct {

  locais loc_origem;
  locais loc_destino;

} Destino;

typedef struct {

  double valor_total;
  int quantidade;
  Data data;
  int assento;
  tipoPassagem tipo;
  Destino destino;

  } Passagem;


  int main () {

setlocale(LC_ALL, "Portuguese");

Passagem pass;

  printf("Bem vindo ao programa de compra e venda de passagens.");
    printf("Qual tipo de passagem?\n" );
    printf("----------------------------------------\n");
    printf("| Tipo            | Código | Desconto(%%) |\n");
    printf("----------------------------------------\n");
    printf("| Normal          |  101   | ---------  |\n");
    printf("----------------------------------------\n" );
    printf("| Meia(estudante) |  102   | 50%%       |\n" );
    printf("----------------------------------------\n" );
    printf("| Especial        |  103   | 100%%      |\n" );
    printf("| (idosos e PcD)  |        |            |\n");
    printf("----------------------------------------\n" );
    printf("Digite o codigo: ");
    scanf("%d", &pass.tipo);


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

    printf("Digite o local de destino:");
    printf("-----------------------------------\n");
    printf("|      Destinos      | Valor (R$)  |  Codigo |\n");
    printf("----------------------------------------------\n");
    printf("|       Assis        | 27,20       |    1     \n");
    printf("---------------------------------------------\n" );
    printf("|     Sao Paulo      | 88,30       |    2    \n" );
    printf("---------------------------------------------\n" );
    printf("|       Bauru        | 30,50       |    3    \n" );
    printf("---------------------------------------------\n" );
    printf("|      Marilia       | 25,00       |    4    \n" );
    printf("---------------------------------------------\n" );
    printf("| Sao Pedro do Turvo | 13,50       |    5    \n" );
    printf("---------------------------------------------\n" );
    printf("|       Osasco       | 75,10       |    6    \n" );
    printf("---------------------------------------------\n" );
    printf("Digite o código: ");
    int opcDesti;
    scanf("%d", &opcDesti );
    pass.destino.loc_destino[opcDesti+1] = pass.destino.loc_destino;
    printf("Quantas passagens quer comprar?");
    scanf("%d", &pass.quantidade);
switch (pass.destino.loc_destino) {
  case Assis:
    pass.valor_total = 27.20 * pass.quantidade;
  break;
  case São_Paulo:
    pass.valor_total = 88.30 * pass.quantidade;
  break;
  case Bauru:
    pass.valor_total = 30.25 * pass.quantidade;
  break;
  case Marília:
    pass.valor_total = 25 * pass.quantidade;
  break;
  case São_Pedro_do_Turvo:
    pass.valor_total = 13.50 * pass.quantidade;
  break;
  case Osasco:
    pass.valor_total = 75.10 * pass.quantidade;
  break;
  default:
    pass.valor_total = 0;
    printf("Código invalido!\n");
  break;
}

    printf("Digite o dia da viagem");
    scanf("%d", &pass.data.dia);
    printf("Digite o mes da viagem");
    scanf("%d", &pass.data.mes);
    printf("Digite o ano da viagem");
    scanf("%d", &pass.data.ano);




    return 0;

    };