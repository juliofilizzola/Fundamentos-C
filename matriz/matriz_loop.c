//
// Created by Julio on 27/04/2025.
//

#include "matriz_loop.h"
#include <stdio.h>

void matriz_loop(void) {
    int vetor[5]; // Declaração de um vetor de 5 inteiros

    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }

    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}