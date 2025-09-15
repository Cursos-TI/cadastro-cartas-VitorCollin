#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo_carta1 [4];
    char nome_cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char estado2;
    char codigo_carta2 [4];
    char nome_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

  // Área para entrada de dados

    pritnf("******* Carta 1 *******");
    printf("Digite o estado entre A e H da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta, letra + numero de 01 a 04 da primeira carta:\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome_cidade1);

    printf("Digite o numero de população da cidade da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km2 da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);


    pritnf("******* Carta 2 *******");

    printf("Digite o estado entre A e H da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta, letra + numero de 01 a 04 da segunda carta:\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome_cidade2);

    printf("Digite o numero de população da cidade da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km2 da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

  // Área para manipulação de dados 
  densidade_populacional1 =  populacao1 / area1;
  pib_per_capita1 =  pib1 / populacao1;

  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 =  pib2 / populacao2;

  // Área para exibição dos dados da cidade
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f \n", densidade_populacional1);
    printf("PIB per capita: %.2f \n", pib_per_capita1);


    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f \n", densidade_populacional2);
    printf("PIB per capita: %.2f \n", pib_per_capita2);


return 0;
} 
