//
// Created by Afonso & Augusto on 03/03/2025.
//


/*
 * 2. Controle de Pontuação de Jogo
 * Objetivo: Criar uma struct para armazenar informações sobre jogadores e suas pontuações em um jogo.
 * Defina uma struct chamada Jogador com os campos nome, pontos, e nivel.
 * Peça ao usuário para inserir o nome e a pontuação de 5 jogadores.
 * Após a entrada de dados, exiba os jogadores com suas pontuações e níveis.

*/

#include <stdio.h>
#include <string.h> // Para usar strcspn

typedef struct Jogadores {
    char nome[50];
    char classe[20];
    int hp_maximo;
    float level, pontos;
};

/* int main() {
    Jogadores jogador[5];

    printf("Vamos registrar cinco jogadores!\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite as informacoes do jogador %d.\n", i + 1);
        printf("Nome: ");
        fgets(jogador[i].nome, sizeof(jogador[i].nome), stdin);
        jogador[i].nome[strcspn(jogador[i].nome, "\n")] = '\0'; // Remove o '\n' do nome

        printf("Classe: ");
        fgets(jogador[i].classe, sizeof(jogador[i].classe), stdin);
        jogador[i].classe[strcspn(jogador[i].classe, "\n")] = '\0'; // Remove o '\n' da classe

        printf("Pontos: ");
        scanf("%f", &jogador[i].pontos);
        printf("HP Maximo: ");
        scanf("%d", &jogador[i].hp_maximo);
        printf("___________________________________________\n");
        getchar();  // Limpa o buffer do teclado
        jogador[i].level = jogador[i].pontos / 100.0;
    }

    printf("\nExibindo as informacoes registradas:\n");

    for (int i = 0; i < 5; i++) {
        printf("Mostrando as informacoes do jogador %d\n", i + 1);
        printf("Nome: %s\n", jogador[i].nome);
        printf("Classe: %s\n", jogador[i].classe);
        printf("Level: %.2f\n", jogador[i].level);  // Exibindo o level com 2 casas decimais
        printf("HP Maximo: %d\n", jogador[i].hp_maximo);
        printf("\n");
    }

    return 0;
}
*/


