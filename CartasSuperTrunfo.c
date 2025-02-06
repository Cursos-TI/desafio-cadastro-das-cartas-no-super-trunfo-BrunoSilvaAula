#include <stdio.h>
#include <stdlib.h>

#define MAX_CARTAS 32

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *cartas, int *quantidade) {
    printf("\n--- Cadastro de Carta ---\n");

    printf("Digite o codigo (exemplo: A01): ");
    scanf("%s", cartas[*quantidade].codigo);

    printf("Digite a populacao: ");
    scanf("%d", &cartas[*quantidade].populacao);

    printf("Digite a area (em km^2): ");
    scanf("%f", &cartas[*quantidade].area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &cartas[*quantidade].pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &cartas[*quantidade].pontosTuristicos);

    (*quantidade)++;
    printf("\nCarta cadastrada com sucesso!\n");
}

void exibirCartas(Carta *cartas, int quantidade) {
    if (quantidade == 0) {
        printf("\nNao tem cartas cadastradas ainda!\n");
        return;
    }

    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }
}

int main() {
    Carta cartas[MAX_CARTAS];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar carta\n");
        printf("2. Mostrar cartas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            cadastrarCarta(cartas, &quantidade);
        } else if (opcao == 2) {
            exibirCartas(cartas, quantidade);
        } else if (opcao != 0) {
            printf("Opcao invalida! Tente de novo.\n");
        }
    } while (opcao != 0);

    printf("\nSaindo... Ate mais!\n");
    return 0;
}
