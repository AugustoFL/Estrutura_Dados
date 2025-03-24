//
// Created by Afonso & Augusto on 24/03/2025.
//

#include <clocale>
#include <cstdio>

typedef struct {

  int dia, mes, ano, hora_prevista;

  } Data;


typedef enum tipoPassagem{ normal, meia, especial };
typedef enum locais { Ourinhos, São_Paulo, Assis, Bauru, Sâo_Pedro_do_Turvo, Marília, Osasco };

typedef struct {

  locais loc_origem;
  locais loc_destino;

} Destino;

typedef struct {

  double preco;
  int quantidade;
  Data data;
  int assento;
  tipoPassagem tipo;
  Destino destino;

  } Passagem;


  int main () {

setlocale(LC_ALL, "Portuguese");


  printf("Bem vindo ao programa de compra e venda de passagens.");
    printf("Aqui está o cardápio:\n" );
    printf("----------------------------------------\n");
    printf(  "| Tipo          | Código | Valor (R$)|\n");
    printf("----------------------------------------\n");
    printf( "| Normal         |  101   | 40,20      |\n");
    printf("----------------------------------------\n" );
    printf("| Meia            |  102   | 20,10      |\n" );
    printf("----------------------------------------\n" );
    printf("| Especial        |  103   | 13,50      |\n" );
    printf("----------------------------------------\n" );
    printf("Digite o código do pedido: ");


    return 0;

    };