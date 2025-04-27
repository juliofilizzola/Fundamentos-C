//
// Created by Julio on 27/04/2025.
//

#include "matriz.h"

#include <stdio.h>


int main() {
    // definindo exemplos praticos de  matrizes

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            const int matriz[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            };
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
