#include <stdio.h>

#define TAM_CODIGO 4
#define TAM_NOME 50

int main() {
    char estado1, estado2;
    char codigo1[TAM_CODIGO], codigo2[TAM_CODIGO];
    char nomeCidade1[TAM_NOME], nomeCidade2[TAM_NOME];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados da Carta 1
    printf("\n=== Inserindo dados da Carta 1 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Entrada de dados da Carta 2
    printf("\n=== Inserindo dados da Carta 2 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
