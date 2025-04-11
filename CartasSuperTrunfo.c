#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
      int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
      float area1, area2, PIB1, PIB2;
      char estado1, estado2;
      char codigo1 [50], codigo2 [50];
      char  cidade1 [50], cidade2 [50];
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    //Carta1

    printf("Carta 1! \n");
    
    printf(" informe um Estado de A a H !: \n");
    scanf("%s", &estado1);

    printf("digite a letra de um estado seguido de um numero exe:(A01,B03): \n");
    scanf("%s", &codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("digite a populacao: \n");
    scanf("%d", &Populacao1);
    
    printf("digite a area: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);





    

    // Carta2

    printf("Carta 2! \n");
    

    printf("informe um Estado de A a H !: \n");
    scanf("%s", &estado2);

    printf("digite a letra de um estado seguido de um numero exe:(A01,B03): \n");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("digite a area: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);



    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
