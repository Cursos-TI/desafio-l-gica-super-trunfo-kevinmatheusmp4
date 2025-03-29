#include <stdio.h>
#include <string.h>

//declarando variáveis CARTA 1
    char estado1[50];
    char cidade1[50];
    char codigodacarta1[50];
    int populacao1;
    int PontosTuristicos1;
    float area1;
    float PIB1;
    double PIBpercapta1;
    double DensidadePopulacional1;

//declarando variáveis CARTA 2
    char estado2[50];
    char cidade2[50];
    char codigodacarta2[50];
    int populacao2;
    int PontosTuristicos2;
    float area2;
    float PIB2;
    double PIBpercapta2;
    double DensidadePopulacional2;


int main() { // função principal

    // Dado da carta 1

    printf("========Digite os dados da Carta 1=========\n");

    printf("Digite o nome do primeiro estado: \n");
    fgets(estado1, 50, stdin); // fgets é mais seguro que scanf para strings

    printf("Digite o nome da capital desse estado: \n");
    fgets(cidade1, 50, stdin);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta1);

    DensidadePopulacional1 = populacao1/area1; // calcular densidade populacional da carta 1

    printf("A Densidade Populacional é: %.2f\n", DensidadePopulacional1);
    
    PIBpercapta1 = PIB1/populacao1; // calcular PIB per Capita da carta 1

    printf("A PIB per Capita é: %.2f\n", PIBpercapta1);

    printf("\n=======VAMOS CADASTRAR A SEGUNDA CARTA=========\n");


    // Dados da carta 2

    printf("\nDigite o nome do  estado: \n");
    fgets(estado2, 50, stdin);

    printf("Digite o nome da capital desse estado: \n");
    fgets(cidade2, 50, stdin);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta2);

    DensidadePopulacional2 = populacao2/area2; // calcular densidade populacional da carta 2

    printf("A Densidade Populacional é: %.2f\n", DensidadePopulacional2);
    
    PIBpercapta2 = PIB1/populacao2; // calcular PIB per Capita da carta 2

    printf("A PIB per Capita é: %.2f\n", PIBpercapta2);

    printf("\n======DADOS DA CARTA 1=======\n");

    printf("\nCodigo da carta 1: %s\n", codigodacarta1);
    printf("Estado: %s - Cidade: %s\n", estado1, cidade1);
    printf("Populaçao: %d - Area: %.2f\n", populacao1, area1);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", PIB1, PontosTuristicos1);

    printf("\n======DADOS DA CARTA 2=======\n");

    printf("\nCodigo da carta 2: %s\n", codigodacarta2);
    printf("Estado: %s - Cidade: %s\n", estado2, cidade2);
    printf("Populaçao: %d - Area: %.2f\n", populacao2, area2);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", PIB2, PontosTuristicos2);

    printf("\n======VAMOS AOS RESULTADOS=======\n");
    // hora de fazer as comparações e mostrar os resultados


    printf("\nComparando População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar área
    printf("Comparando Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu!\n");
    } else if (area2 > area1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar PIB
    printf("Comparando PIB: ");
    if (PIB1 > PIB2) {
        printf("Carta 1 venceu!\n");
    } else if (PIB2 > PIB1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar Pontos Turísticos
    printf("Comparando Pontos Turísticos: ");
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Carta 1 venceu!\n");
    } else if (PontosTuristicos2 > PontosTuristicos1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar Densidade Populacional
    printf("Comparando Densidade Populacional: ");
    if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Carta 1 venceu!\n");
    } else if (DensidadePopulacional2 < DensidadePopulacional1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar PIB per capita
    printf("Comparando PIB per capita: ");
    if (PIBpercapta1 > PIBpercapta2) {
        printf("Carta 1 venceu!\n");
    } else if (PIBpercapta2 > PIBpercapta1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar "Super poder" (soma de todos os dados)
    printf("Comparando Super poder: ");
    float superPoder1 = populacao1 + area1 + PIB1 + PontosTuristicos1 - DensidadePopulacional1;
    float superPoder2 = populacao2 + area2 + PIB2 + PontosTuristicos2 - DensidadePopulacional2;
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu!\n");
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    //mensagem de fim de jogo
    printf("\n=======FIM DO JOGO=========\n"); 
    printf("Obrigado por jogar!\n\n");    

    return 0;

}