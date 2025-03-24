//
// Created by Afonso & Augusto on 03/03/2025.
//
/*
Calendário de Eventos
Objetivo: Criar uma struct para armazenar eventos em um calendário e permitir que o usuário cadastre e visualize
esses eventos.
Descrição:
Defina uma struct chamada Evento com os campos nome, data (representada como uma string ou estrutura de data)
e local.
Permita que o usuário cadastre 3 eventos (nome, data e local).
Após o cadastro, mostre os eventos armazenados na ordem de data.
*/

#include <stdio.h>
#include <string.h>

typedef struct Data {
  int dia, mes, ano;
  };

typedef struct Eventos {

  char nome[50];
  Data data;
  char local[100];

  };

  int main() {
    printf("Vamos registar tres eventos...\n");
    Eventos eventos[3];
    for (int i = 0; i < 3; i++) {
      printf("Insira o nome do evento: ");
      fgets(eventos[i].nome, sizeof(eventos[i].nome), stdin);
      printf("Insira o dia do evento: ");
      scanf("%d", &eventos[i].data.dia);
      printf("Insira o mes do evento: ");
      scanf("%d", &eventos[i].data.mes);
      printf("Insira o ano do evento: ");
      scanf("%d", &eventos[i].data.ano);
      getchar();
      printf("Insira o nome do local: ");
      fgets(eventos[i].local, sizeof(eventos[i].local), stdin);
      eventos[i].local[strcspn(eventos[i].local, "\n")] = '\0';
    }
    printf("Vamos exibir os eventos: \n");
    for (int i = 0; i < 3; i++) {
    printf("\nNome: %s", eventos[i].nome);
    printf("Data: %d/%d/%d \n", eventos[i].data.dia, eventos[i].data.mes, eventos[i].data.ano);
    printf("Local: %s \n", eventos[i].local);
    }
  }