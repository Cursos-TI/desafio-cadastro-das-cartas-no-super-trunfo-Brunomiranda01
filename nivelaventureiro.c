#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
    float area1, area2, PIB1, PIB2;
    float  DensidadePopulacional1, DensidadePopulacional2;
    float PibperCapita1, PibperCapita2;
    char estado1, estado2;                   
    char codigo1[50], codigo2[50];            
    char cidade1[50], cidade2[50];          
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Carta1

    printf("Carta 1! \n");

    printf(" informe um Estado de A a H !: \n");
    scanf(" %c", &estado1);

    printf("digite a letra de um estado seguido de um numero exe:(A01,B03): \n");
    scanf("%s", codigo1); 

    printf("digite o nome da cidade: \n");
    scanf( "%s", cidade1); 

    printf("digite a populacao: \n");
    scanf("%d", &Populacao1);

    printf("digite a area: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / area1 ;

    printf("A Densidade Pupulacional é: %.2f\n", DensidadePopulacional1);

    PibperCapita1 = (float) (PIB1 / Populacao1);
    
    printf ("O PIB per Capita é: %.2f\n", PibperCapita1);



    // Carta2

    printf("\nCarta 2! \n");

    printf("informe um Estado de A a H !: \n");
    scanf(" %c", &estado2); 

    printf("digite a letra de um estado seguido de um numero exe:(A01,B03): \n");
    scanf("%s", codigo2); 

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade2); 

    printf("digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("digite a area: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / area2;

    


    PibperCapita2 = (float) PIB2 / Populacao2;
    
   

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional:  %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita1);


    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional:  %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita1);

    return 0;
}