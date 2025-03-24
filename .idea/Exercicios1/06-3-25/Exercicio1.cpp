//
// Created by Afonso & Augusto on 06/03/2025.
//


#include <stdio.h>

typedef enum { Pendente = 1, Processando, Enviado, Entregue } Status;


int main(){

    int status;

    printf("Vamos checar o status do pedido.\n Digite o status do pedido:"
           "\n 1 - Pendente \n 2 - Processando\n 3 - Enviando \n 4 - Entregue\n Digite: ");
    scanf("%d", &status);

    if (status <= 0 || status > 4) {
        printf("Status invalido");
        return 1;
    }

    switch (status) {
        case Pendente:
            printf("O pedido esta pendente.");
            break;
        case Processando:
            printf("O pedido esta sendo processado.");
            break;
        case Enviado:
            printf("O pedido esta sendo enviado.");
            break;
        case Entregue:
            printf("O pedido foi entregue.");
            break;
    }



  return 0;

  }