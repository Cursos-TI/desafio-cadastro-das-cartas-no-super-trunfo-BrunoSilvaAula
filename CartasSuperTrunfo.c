#include <stdio.h>


int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    printf("Digite a área em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a área em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
