#include <stdio.h>

#define TAM_CODIGO 4
#define TAM_NOME 50

int main() {
    char estado1, estado2;
    char codigo1[TAM_CODIGO], codigo2[TAM_CODIGO];
    char nomeCidade1[TAM_NOME], nomeCidade2[TAM_NOME];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("\n=== Inserindo dados da Carta 1 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o C�digo da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a Popula��o da Cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a �rea da Cidade (km�): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade (em bilh�es de reais): ");
    scanf("%f", &pib1);
    printf("Digite o N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontosTuristicos1);

    // C�lculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\n=== Inserindo dados da Carta 2 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o C�digo da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a Popula��o da Cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a �rea da Cidade (km�): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade (em bilh�es de reais): ");
    scanf("%f", &pib2);
    printf("Digite o N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontosTuristicos2);

    // C�lculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibi��o dos resultados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Popula��o: %d habitantes\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibi��o dos resultados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Popula��o: %d habitantes\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

