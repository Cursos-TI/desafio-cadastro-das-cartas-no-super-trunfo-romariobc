#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   // Atributos da cidade 1
    char codigo1[10];
    char nome1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    // Atributos da cidade 2
    char codigo2[10];
    char nome2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    printf("--- Cadastro das Cartas de Cidades ---\n");

    // Cadastro da cidade 1
    printf("Digite o codigo da cidade 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");

    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1 (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em milhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da cidade 2
    printf("Digite o codigo da cidade 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
  
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2 (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em milhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

  





    return 0;
}
