//
// Created by Julio on 25/03/2025.
//

#include <stdio.h>

int main() {
  int population, turistic_points;
  char city_name[50], code[10], state[3];
  float area, pib;

  for (int i = 0; i < 2; i++) {
    printf("Digite o nome da cidade: \n ");
    scanf("%s", city_name);

    printf("Digite o código da cidade: \n");
    scanf("%s", code);

    printf("Digite o estado da cidade: \n");
    scanf("%s", state);

    printf("Digite a população da cidade: \n");
    scanf("%d", &population);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &turistic_points);

    printf("\nCidade: %s\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n\n",
           city_name, code, state, population, area, pib, turistic_points);
  }
    return 0;
 }