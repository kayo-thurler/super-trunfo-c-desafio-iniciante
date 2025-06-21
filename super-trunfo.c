#include <stdio.h> // inclui funções padrão de entrada e saída, como printf e scanf

// int main() função principal onde a execução do programa C começa.
int main()
{

    printf("Desafio Super Trunfo\n");

    // Declaração de variáveis da primeira carta:
    char estado1[2], codigo_carta1[4], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area_cidade1, pib1;

    // Declaração de variáveis da segunda carta:
    char estado2[2], codigo_carta2[4], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area_cidade2, pib2;

    // Entrada de dados da primeira carta:
    printf("\nAbaixo,informe os dados da primeira carta. \n\n");

    printf("Estado: Insira uma letra para representar o Estado('A' a 'H'): \n");
    scanf("%s", estado1);

    printf("Código da carta: Insira o Estado - escolhido acima - junto com um número ('01' a '04') para criar o código da carta(Ex: A01,B02,C01): \n");
    scanf("%s", codigo_carta1);

    printf("Cidade: Insira o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("População: Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Área: Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_cidade1);

    printf("PIB: Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Exibição dos dados da primeira carta:
    printf("\nDados inseridos da Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area_cidade1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos1);

    // Entrada de dados da segunda carta:
    printf("\nAbaixo,informe os dados da segunda carta. \n\n");

    printf("Estado: Insira uma letra para representar o Estado('A' a 'H'): \n");
    scanf("%s", estado2);

    printf("Código da carta: Insira o Estado - escolhido acima - junto com um número ('01' a '04') para criar o código da carta(Ex: A02,B03,C04): \n");
    scanf("%s", codigo_carta2);

    printf("Cidade: Insira o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("População: Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Área: Insira a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area_cidade2);

    printf("PIB: Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da segunda carta:
    printf("\nDados inseridos da Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area_cidade2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);

    // return 0; indica que o programa terminou com sucesso.
    return 0;
}
