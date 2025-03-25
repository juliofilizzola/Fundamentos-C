//
// Created by Julio on 25/03/2025.
//

#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char name[50];

    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);

    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &matricula);

    printf("Digite a altura do aluno: \n");
    scanf("%f", &altura);

    printf("Digite o nome do aluno: \n");
    scanf("%s", name);

    printf("O aluno %s, matrícula %d, tem %d anos e %.2f de altura.\n", name, matricula, idade, altura);
}