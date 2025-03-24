//
// Created by Afonso on 03/03/2025.
//
#include <stdio.h>

typedef struct Pessoa {

    char name[50];
    int age;
    char gender;
    char cpf[11];
    float weight;


};

    int main(){

 Pessoa pessoas[5];
        for(int i = 0; i < 5; i++) {
            printf("Digite o nome da %d pessoa:\n", i + 1);
        }

    return 0;
}