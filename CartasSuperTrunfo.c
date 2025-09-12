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

    char estado2;
    char codigo_carta2 [4];
    char nome_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
  // Área para entrada de dados
    printf("Digite o estado entre A e H:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta, letra + numero de 01 a 04:\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);

    printf("Digite o numero de população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km2:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o estado entre A e H:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta, letra + numero de 01 a 04:\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite o numero de população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);
  // Área para exibição dos dados da cidade
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);


return 0;
} 
