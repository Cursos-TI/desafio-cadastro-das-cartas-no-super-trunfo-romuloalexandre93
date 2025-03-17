#include <stdio.h>

int main(){
    char estado;
    char codigoCarta[5], nomeCidade[20];
    int area, populacao, pontoTur;
    float pib, densidade, perCapita;

    /*Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: Fortaleza
    População: 9.345.192
    Área: 148.886 km²
    PIB: 73.436 bilhões de reais
    Número de Pontos Turísticos: 40
    Densidade Populacional: 62,76 hab/km²
    PIB per Capita: 7.858,15 reais

    e

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: João Pessoa
    População: 5044963
    Área: 56.585 km²
    PIB: 22.244 bilhões de reais
    Número de Pontos Turísticos: 30
    Densidade Populacional: 89,15 hab/km²
    PIB per Capita: 4.409,15 reais
    */
    printf("Desafio Cartas Super Trunfo Nivel Aventureiro.\n\n");
    //Inserção dos dados.
    printf("Digite o estado: ");
    scanf("%c", &estado);
    printf("Digite o codigo: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area [em km^2]: ");
    scanf("%d", &area);
    printf("Digite o PIB local [em reais]: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur);

    //Cálculo da densidade populacional.
    densidade = (float) populacao/area;
    //Cálculo do PIB per capita.
    perCapita = pib/populacao;

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d km^2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", perCapita);

    return 0;
}