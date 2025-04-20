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

    // Inserção da variável 'atributo' e menu interativo

    int atributo;

    printf("\nEscolha o atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &atributo);

    // Uso do switch e if para fazer a comparação das cartas e exibição dos resultados

    switch (atributo)
    {
    case 1:
        if (populacao1 > populacao2) 
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: População\n");
         printf("Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
         printf("Carta 1 venceu!\n");

    }   else if (populacao1 < populacao2)
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: População\n");
         printf("Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
         printf("Carta 2 venceu!\n"); 

    }   else 
    {
         printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: População\n");
         printf("Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
         printf("Houve um empate\n"); 
    }
    break;

    case 2:
        if (area1 > area2) 
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: Área\n");
         printf("Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
         printf("Carta 1 venceu!\n");

    }   else if (area1 < area2)
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: Área\n");
         printf("Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
         printf("Carta 2 venceu!\n"); 

    }   else 
    {
        printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: Área\n");
        printf("Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("Houve um empate!\n"); 
    }
    break;

    case 3:
        if (pib1 > pib2) 
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: PIB\n");
         printf("Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
         printf("Carta 1 venceu!\n");

    }   else if (pib1 < pib2)
    {   printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
        printf("Carta 2 venceu!\n");

    }   else 
    {
        printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
        printf("Houve um empate!\n"); 
    }
    break;

    case 4:
        if (pontosTuristicos1 > pontosTuristicos2) 
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: Número de pontos turísticos\n");
         printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
         printf("Carta 1 venceu!\n");

    }   else if (pontosTuristicos1 < pontosTuristicos2)
    {   printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
        printf("Carta 2 venceu!\n");

    }   else 
    {
        printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
        printf("Houve um empate!\n"); 
    }
    break;

    case 5:
        if (densidade1 < densidade2) 
    {    printf("Cidades: %s e %s \n", cidade1, cidade2);
         printf("Atributo: Densidade demográfica\n");
         printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
         printf("Carta 1 venceu!\n");

    }   else if (densidade1 > densidade2)
    {   printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
        printf("Carta 2 venceu!\n");

    }   else 
    {
        printf("Cidades: %s e %s \n", cidade1, cidade2);
        printf("Atributo: Densidade demográfica\n");
        printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
        printf("Houve um empate!\n"); 
    }
    break;    
    
    default:
        printf("Opção inválida\n");
        break;
    }
 
  
    return 0;

}    