//
// Created by Julio on 06/04/2025.
//
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("A soma dos números é %d\n", a + b);

    int x = 10;
    int y = 20;
    float z = 30.5f;
    float w = 40.5f;

    float result = (x + y) * z / w;
    printf("O resultado da expressão é: %.2f\n", result);
    return 0;
}
