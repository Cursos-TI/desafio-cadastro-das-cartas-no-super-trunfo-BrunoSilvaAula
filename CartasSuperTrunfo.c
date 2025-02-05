#include <stdio.h>
#include <stdlib.h>
#define MAX_CARTAS 32

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno

typedef struct
{
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristico;
}Carta;

void cadastrarCartas(Carta *carta, int *quantidade){
    printf("\n--- Cadastro de Carta ---\n");

    printf("Digite o codigo(Exemplo: A01):");
    scanf("%s",carta[*quantidade].codigo);

    printf("Digite a população: ");
    scanf("%d", &carta[*quantidade].populacao);

    printf("Digite a aréa: ");
    scanf("%f", &carta[*quantidade].area);

    printf("Digite o pib: ");
    scanf("%f", &carta[*quantidade].pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta[*quantidade].pontosTuristico);

    (*quantidade)++;
    
    printf("---Cadastrado com Sucesso---");
}

void exibirCartas(Carta *cartas, int quantidade){
    if(quantidade == 0){
        printf("Nenhuma carta cadastrada\n");
        return;
    }

    printf("---Cartas Cadastradas---");
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n Carta %d: \n", i+1);
        printf("codigo : %s\n", cartas[i].codigo);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f\n", cartas[i].area);
        printf("Pib: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristico);
    }
    
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    Carta cartas [MAX_CARTAS];
    int quantidade = 0;
    int opcao;

    do{

        printf("\n---Menu---\n");
        printf("1. Cadastrar Cartas\n");
        printf("2. Mostrar Cartas\n");
        printf("0. Sair\n");
        printf("Escolha uma Opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            cadastrarCartas(cartas, &quantidade);
        }else if (opcao == 2){
            exibirCartas(cartas, quantidade);
        } else if(opcao !=0){
            printf("Opcao invalida\n");

        }

    }while (opcao !=0);
    
    return 0;
}
