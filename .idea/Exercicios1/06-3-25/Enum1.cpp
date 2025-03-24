//
// Created by Afonso & Augusto on 06/03/2025.
//



#include <stdio.h>

typedef enum { VERMELHO, AZUL, VERDE } Cor;

int main(){

    int escolha;
    printf("Escolha uma cor.\n 0 - Vermelho\n 1 - Azul\n 2 - Verde\nDigite:");
    scanf("%d", &escolha);

    if (escolha < 0 || escolha > 2) {
        printf("Erro de escolha invalida");
        return 1;
    }

    Cor corEscolhida = (Cor)escolha;
    switch (corEscolhida) {
        case VERMELHO:
            printf("Você escolheu: Vermelho");
            break;
        case AZUL:
            printf("Você escolheu: Azul");
            break;
        case VERDE:
            printf("Você escolheu: Verde");
            break;
    }

  return 0;

  }