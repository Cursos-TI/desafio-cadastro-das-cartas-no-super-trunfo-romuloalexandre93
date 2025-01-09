#include <stdio.h>

// Alteração Rômulo;
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao, codigo, pontoTur;
    float pib, area;
    char nomeCidade[50];

    printf("Cadastro das cidades:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área territorial: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontoTur);

    prinf("\nDados da cidade:\n");
    printf("Nome: %s\n", nomeCidade);
    printf("Código: %d\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área territorial: %.2f km²\n", area);
    printf("PIB da cidade: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontoTur);
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
