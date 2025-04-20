#include <stdio.h>

int main(){

    // Definição de  variáveis separadas para cada atributo da cidade.

    int pontosTuristicos1;
    int pontosTuristicos2;
    unsigned long int populacao1;
    unsigned long int populacao2;
    float pib1;
    float pib2;
    float area1;
    float area2;
    char estado1;
    char estado2;
    char codigo1[5];
    char codigo2[5];
    char cidade1[20];
    char cidade2[20];    
    
    // Captura das entradas do usuário para cada atributo.

    printf("Desafio Cartas Super Trunfo\n\n");

    printf("Digite a letra correspondente ao estado 1: \n");
    scanf(" %c", &estado1);

    printf("Digite a letra correspondente ao estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade 1: \n");
    scanf("%s", codigo1);

    printf("Digite o código da cidade 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a população da cidade 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Inserção e cálculo das variáveis de Densidade populacional e PIB per capta:

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpc1 = (float) pib1 / populacao1;
    float pibpc2 = (float) pib2 / populacao2;

    // Exibição dos Dados das Cartas acrescidos com a Densidade populacional e PIB per capta:

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpc1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    // Comparação do atributo 'Área' e exibição da carta vencedora

    printf("\nComparação de cartas (Atributo Área):\n\n");

    printf("Carta 1 - %s: %.2f Km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f Km²\n", cidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);        
    }

    return 0;

}    