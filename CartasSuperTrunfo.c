#include <stdio.h>

int main(){
    char estado, estado2;
    char codigoCarta[5], nomeCidade[20];
    int area, pontoTur, populacao;
    float pib, perCapita;
    unsigned long int densidade, densidade1, densidade2;
    float superpoder, resultado, resultado2, carta1, carta2;

    /*Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: Fortaleza
    População: 9345192
    Área: 148.886 km²
    PIB: 73.436 bilhões de reais
    Número de Pontos Turísticos: 40
    Densidade Populacional: 62,76 hab/km²
    PIB per Capita: 7.858,15 reais
    Super Poder:

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
    Super Poder:
    */
    printf("Desafio Cartas Super Trunfo Nivel Mestre.\n\n");
    //Inserção dos dados.
    printf("Carta 1:\n");
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
    densidade = populacao/area;
    //Cálculo do PIB per capita.
    perCapita = pib/populacao;
    //Cálculo do Super Poder.
    superpoder = populacao+area+pib+perCapita+(1/densidade)+pontoTur;
    densidade1 = densidade;
    carta1 = superpoder;

    //Apresentação dos dados selecionados da carta 1.
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d km^2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);
    printf("Densidade Populacional: %lu hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", perCapita);
    printf("Super Poder: %.2f", superpoder);


    printf("\n\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
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
    densidade = populacao/area;
    //Cálculo do PIB per capita.
    perCapita = pib/populacao;
    //Cálculo do Super Poder.
    superpoder = populacao+area+pib+perCapita+(1/densidade)+pontoTur;
    densidade2 = densidade;
    carta2 = superpoder;

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d km^2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);
    printf("Densidade Populacional: %lu hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", perCapita);
    printf("Super Poder: %.2f", superpoder);

    //comparação entre cartas.
    printf("\n\n");
    printf("Se sair 1, carta 1 venceu. Se sair 0, carta 2 venceu.\n");
    resultado = (carta1 > carta2);
    printf("O resultado da comparacao entre cartas eh %d.\n", resultado);
    resultado2 = (densidade1 < densidade2);
    printf("O resultado da comparacao entre densidades eh %d.\n", resultado2);

    return 0;
}
