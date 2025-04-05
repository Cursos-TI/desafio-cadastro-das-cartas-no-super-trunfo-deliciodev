#include <stdio.h>

int main() {
    char estado;
    char codigo[4], cidade[50];
    int populacao, turistico;
    float area, pib;

    char estado2;
    char codigo2[4], cidade2[50];
    int populacao2, turistico2;
    float area2, pib2;
  
  printf("Digite: A Letra do Estado 1\n");
  scanf(" %c", &estado);

  printf("Digite: Codigo\n");
  scanf("%s", &codigo);

  printf("Digite: A cidade\n");
  scanf("%s", &cidade);

  printf("Digite: Populacao\n");
  scanf("%d", &populacao);

  printf("Digite: Area\n");
  scanf("%f", &area);

  printf("Digite: PIB\n");
  scanf("%f", &pib);

  printf("Digite: Numero de Pontos turisticos\n");
  scanf("%d", &turistico);

  printf("\nDigite: A Letra do Estado 2\n");
  scanf(" %c", &estado2);

  printf("Digite: Codigo\n");
  scanf("%s", &codigo2);

  printf("Digite: A cidade\n");
  scanf("%s", &cidade2);

  printf("Digite: Populacao\n");
  scanf("%d", &populacao2);

  printf("Digite: Area\n");
  scanf("%f", &area2);

  printf("Digite: PIB\n");
  scanf("%f", &pib2);

  printf("Digite: Numero de Pontos turisticos\n");
  scanf("%d", &turistico2);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", turistico);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", turistico2);

    return 0;
}
