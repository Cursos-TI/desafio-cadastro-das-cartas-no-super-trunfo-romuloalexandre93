#include <stdio.h>

// Alteração Rômulo;
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado;
    char codigoCarta[5], nomeCidade[20];
    int populacao, pontoTur;
    float area, pib;

    /*Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    e

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30
    */

    //Inserção dos dados.
    printf("Digite o estado: ");
    scanf("%c", &estado);
    printf("Digite o codigo: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area [em km2]: ");
    scanf("%f", &area);
    printf("Digite o PIB local [em bilhoes]: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur);

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: R$ %.2f bi\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);

    return 0;
}
