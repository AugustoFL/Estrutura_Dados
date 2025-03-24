//
// Created by Afonso & Augusto on 06/03/2025.
//

#include <cstdio>

typedef enum { DOMINGO = 1, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO } Semana;


int main(){

    int diaUsuario;

    printf("Digite o dia da semana:"
           "\n 1 - Domingo\n 2 - Segunda\n 3 - Terca\n 4 - Quarta\n 5 - Quinta\n 6 - Sexta\n 7 - Sabado\n Digite: ");
    scanf("%d", &diaUsuario);

    switch (diaUsuario) {
        case DOMINGO:
            printf("Usuario disse que hoje e domingo.");
            break;
        case SEGUNDA:
            printf("Usuario disse que hoje e segunda.");
            break;
        case TERCA:
            printf("Usuario disse que hoje e terca.");
            break;
        case QUARTA:
            printf("Usuario disse que hoje e quarta.");
            break;
        case QUINTA:
            printf("Usuario disse que hoje e quinta.");
            break;
        case SEXTA:
            printf("Usuario disse que hoje e sexta.");
            break;
        case SABADO:
            printf("Usuario disse que hoje e sabado.");
            break;
        default:
            printf("Dia invalido.");
            return 1;
    }

  return 0;

  }