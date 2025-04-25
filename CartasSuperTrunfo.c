#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    char estado1;                    // Estado (A-H)
    char codigo1[4];                // codigo da cidade
    char cidade1[20];              // Código da carta (ex: A01, B02)
    int populacao1;               // População
    float area1;                 // Área em km²
    float pib1;                 // PIB em bilhões de reais
    int pontosTuristicos1;     // Número de pontos turísticos

    char estado2;                // Estado (A-H)
    char codigo2[4];            // Codigo da cidade
    char cidade2[20];          // Código da carta (ex: A01, B02)
    int populacao2;           // População
    float area2;             // PIB em bilhões de reais
    float pib2;             // PIB em bilhões de reais
    int pontosTuristicos2; // Número de pontos turísticos

    // Instruções para o usuário
    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    // Leitura dos dados da primeira carta
    printf("Digite os dados da PRIMEIRA carta:\n");
    printf("Estado (A-H):\n");
    scanf(" %c", &estado1); // Lê o estado como um cbaaractere

    printf("Código da Carta:\n");
    scanf(" %s", &codigo1); // Lê o código como uma string
    
    printf("Digete nome da cidade:\n");
    scanf("%s", &cidade1); // Lê o código como uma string

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da SEGUNDA carta:\n");
    printf("Estado (A-H):\n");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02):\n");
    scanf(" %s", &codigo2);

    printf("Digete nome da cidade:\n");
    scanf("%s", &cidade2); // Lê o código como uma string

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}