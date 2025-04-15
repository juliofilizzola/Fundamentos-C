//
// Created by julio-filizzola on 15/04/25.
//

#include <stdio.h>

int main() {
    int idade = 20;
    char* resultado;

    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("Resultado: %s\n", resultado);

    return 0;
}
