//
// Created by Afonso & Augusto on 03/03/2025.
//

#include <locale.h>
#include <stdio.h>

/*
 1. Cadastro de Livro
Objetivo: Criar uma struct para representar um livro e permitir que o usuário insira informações sobre vários
livros.
Descrição: Defina uma struct chamada Livro com os campos titulo, autor, ano e preco.
Peça ao usuário para inserir as informações de 3 livros.
Após a inserção, imprima uma lista de todos os livros cadastrados.
 */

typedef struct Livro {

    char titulo[40];
    char autor[50];
    int ano;
    float preço;

};

 /*int main_Ex1() {

    setlocale(LC_ALL, "");
    Livro livro[3];

    printf("Digite a informacao de tres livros. \n");

    for (int i = 0; i < 3; i++) {

        printf("Digite o titulo:");
        fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
        printf("Digite o autor:");
        fgets(livro[i].autor, sizeof(livro[i].autor), stdin);
        printf("Digite o ano:");
        scanf("%d", &livro[i].ano);
        getchar();

    }

    printf("Vamos mostrar as informacoes dos livros que digitou");
    for (int i = 0; i < 3; i++) {
        printf("Mostrando as informacoes do livro %d: \n" , i + 1);
        printf("Titulo: %s", livro[i].titulo);
        printf("Autor: %s", livro[i].autor);
        printf("Ano: %d", livro[i].ano);
        printf("\n");
    }


    return 0;
}
*/