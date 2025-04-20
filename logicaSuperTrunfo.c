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

    // Inclusão de novas variáveis, menus interativos e dinâmicos

    int atributo1, atributo2;
    float valor1cidade1, valor1cidade2;
    float valor2cidade1, valor2cidade2;

    printf("\nEscolha o atributo 1\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o atributo 2\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2)           // Uso do if para impedir repetição do atributo
    {
        printf("\nVocê escolheu o mesmo atributo duas vezes. Tente novamente com atributos diferentes.\n");
        
    } else {

        switch (atributo1) {            // Uso do switch para comparação dos atributos  
        case 1: 
           valor1cidade1 = populacao1; 
           valor1cidade2 = populacao2; 
        break;
        case 2: 
           valor1cidade1 = area1; 
           valor1cidade2 = area2; 
        break;
        case 3: 
           valor1cidade1 = pib1; 
           valor1cidade2 = pib2; 
        break;
        case 4: 
           valor1cidade1 = pontosTuristicos1; 
           valor1cidade2 = pontosTuristicos2; 
        break;
        case 5: 
           valor1cidade1 = densidade1; 
           valor1cidade2 = densidade2; 
        break;
        default: 
           printf("Atributo 1 inválido!\n"); 
        break;
    }

    switch (atributo2) {
        case 1: 
           valor2cidade1 = populacao1; 
           valor2cidade2 = populacao2; 
        break;
        case 2: 
           valor2cidade1 = area1; 
           valor2cidade2 = area2; 
        break;
        case 3: 
           valor2cidade1 = pib1; 
           valor2cidade2 = pib2; 
        break;
        case 4: 
           valor2cidade1 = pontosTuristicos1; 
           valor2cidade2 = pontosTuristicos2; 
        break;
        case 5: 
           valor2cidade1 = densidade1; 
           valor2cidade2 = densidade2; 
        break;
        default: 
           printf("Atributo 2 inválido!\n"); 
        break;
    }
    }

    float soma1 = valor1cidade1 + valor2cidade1;
    float soma2 = valor1cidade2 + valor2cidade2;

    // Exibição dos resultados

    printf("\n--- Resultado da Comparação ---\n");
    printf("%s vs %s\n", cidade1, cidade2);
    printf("Atributo 1 (%d): %.2f vs %.2f\n", atributo1, valor1cidade1, valor1cidade2);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", atributo2, valor2cidade1, valor2cidade2);
    printf("Soma total dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("\n %s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\n %s venceu!\n", cidade2);
    } else {
        printf("\n Empate!\n");
    }

    return 0;
}