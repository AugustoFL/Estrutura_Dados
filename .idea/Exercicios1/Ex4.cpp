//
// Created by Afonso & Augusto on 03/03/2025.
//
/*
4. Controle de Estoque de Produtos
Objetivo: Criar uma struct para representar um produto e gerenciar um pequeno estoque.

Descrição:
Defina uma struct chamada Produto com os campos nome, quantidade, preco.
Permita que o usuário cadastre 5 produtos e informe a quantidade e preço de cada um.
Imprima o estoque de produtos com nome, quantidade e preço.
*/
#include <stdio.h>

typedef struct Produto{

  char nome[50];
  int quantidade;
  float preco;

};

int main() {
  Produto produto[5];
  printf("Vamos Registrar cinco produtos...");
  for (int i = 0; i < 5; i++) {
    printf("\nProuto %d", i+1);
    printf("\nNome:");
    fgets(produto[i].nome, sizeof(produto[i].nome), stdin);
    printf("\nQuantidade: ");
    scanf("%d", &produto[i].quantidade);
    printf("\nPreco: ");
    scanf("%f", &produto[i].preco);
    getchar();
  }
  printf("Vamos exibir o estoque de produtos:\n");
  for (int i = 0; i < 5; i++) {
    printf("\nEstoque %d", i+1);
    printf("\nNome do Produto: %s", produto[i].nome);
    printf("\nQuantidade: %d", produto[i].quantidade);
    printf("\nPreco: %.2f \n", produto[i].preco);
  }
}