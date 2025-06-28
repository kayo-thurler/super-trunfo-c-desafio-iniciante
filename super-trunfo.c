#include <stdio.h> // inclui funções padrão de entrada e saída, como printf e scanf

// int main() função principal onde a execução do programa C começa.
int main()
{

    printf("Desafio Super Trunfo!\n");

    // Declaração de variáveis da primeira carta:
    char estado1[2], codigo_carta1[4], nome_cidade1[50];
    unsigned long int populacao1; // Atualização do nível mestre: inclusão do unsigned long int
    int pontos_turisticos1;
    float area_cidade1, pib1;
    float densidade_populacional1, pib_percapta1; // inclusão do nível intermediário
    float inverso_densidade1, super_poder1;       // inclusão do nível mestre

    // Declaração de variáveis da segunda carta:
    char estado2[2], codigo_carta2[4], nome_cidade2[50];
    unsigned long int populacao2; // Atualização do nível mestre: inclusão do unsigned long int
    int pontos_turisticos2;
    float area_cidade2, pib2;
    float densidade_populacional2, pib_percapta2; // inclusão do nível intermediário
    float inverso_densidade2, super_poder2;       // inclusão do nível mestre

    // Entrada de dados da primeira carta:
    printf("\nAbaixo,informe os dados da primeira carta. \n\n");

    printf("Estado: Insira uma letra para representar o Estado('A' a 'H'): \n");
    scanf("%s", estado1);

    printf("Código da carta: Insira o Estado - escolhido acima - junto com um número ('01' a '04') para criar o código da carta(Ex: A01,B02,C01): \n");
    scanf("%s", codigo_carta1);

    printf("Cidade: Insira o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("População: Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Área: Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_cidade1);

    printf("PIB: Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Inclusão do Nível Intermediário: Cálculo da densidade populacional e do PIB per Capta.
    densidade_populacional1 = (float)populacao1 / area_cidade1;
    pib_percapta1 = pib1 / (float)populacao1;

    // Inclusão do Nível Mestre: Cálculo do inverso da densidade populacional e do Super Poder;
    inverso_densidade1 = 1.0 / densidade_populacional1;
    super_poder1 = (float)populacao1 + area_cidade1 + pib1 + (float)pontos_turisticos1 + pib_percapta1 + inverso_densidade1;

    // Exibição dos dados da primeira carta:
    printf("\nDados inseridos da Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da cidade: %s \n", nome_cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f \n", area_cidade1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos1);
    // Inclusão do nível intermediário: exibição da Densidade Populacional e PIB per Capta calculados.
    printf("Densidade populacional: %.2f \n", densidade_populacional1);
    printf("PIB per capta: %.2f\n", pib_percapta1);
    // Inclusão do nível mestre: exibição do Super Poder calculado(soma de todos os atributos numéricos).
    printf("Super Poder: %.2f\n", super_poder1);

    // Entrada de dados da segunda carta:
    printf("\nAbaixo,informe os dados da segunda carta. \n\n");

    printf("Estado: Insira uma letra para representar o Estado('A' a 'H'): \n");
    scanf("%s", estado2);

    printf("Código da carta: Insira o Estado - escolhido acima - junto com um número ('01' a '04') para criar o código da carta(Ex: A02,B03,C04): \n");
    scanf("%s", codigo_carta2);

    printf("Cidade: Insira o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("População: Insira o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Área: Insira a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area_cidade2);

    printf("PIB: Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Inclusão do Nível Intermediário: Cálculo da densidade populacional e do PIB per Capta.
    densidade_populacional2 = (float)populacao2 / area_cidade2;
    pib_percapta2 = pib2 / (float)populacao2;

    // Inclusão do Nível Mestre: Cálculo do inverso da densidade populacional e do Super Poder;
    inverso_densidade2 = 1.0 / densidade_populacional2;
    super_poder2 = (float)populacao2 + area_cidade2 + pib2 + (float)pontos_turisticos2 + pib_percapta2 + inverso_densidade2;

    // Exibição dos dados da segunda carta:
    printf("\nDados inseridos da Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f \n", area_cidade2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);
    // Inclusão do nível intermediário: exibição da Densidade Populacional e PIB per Capta calculados.
    printf("Densidade populacional: %.2f \n", densidade_populacional2);
    printf("PIB per capta: %.2f\n", pib_percapta2);
    // Inclusão do nível mestre: exibição do Super Poder calculado(soma de todos os atributos numéricos).
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação dos atributos das cartas (inclusão nível mestre)
    printf("\n*Comparação de Cartas:*\n");
    printf("***Resultado 1: Carta 1 vence x Resultado 0: Carta 2 vence***\n\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area_cidade1 > area_cidade2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capta: %d\n", pib_percapta1 > pib_percapta2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    // return 0; indica que o programa terminou com sucesso.
    return 0;
}
