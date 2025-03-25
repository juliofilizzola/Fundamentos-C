//
// Created by julio-filizzola on 25/03/25.
//
#include <stdio.h>

int main() {
    float a, b; // aqui pode ser float também
    printf("Digite a primeira nota: ");
    scanf("%.2f", &a);
    printf("Digite a segunda nota: ");
    scanf("%.2f", &b);
    printf("A média das notas é %.2f\n", (a + b) / 2);
    return 0;
}
