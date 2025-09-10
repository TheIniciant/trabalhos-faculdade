#include <stdio.h>

int main() {
    // carta 1
    char estado;                
    char codigocarta[5];    
    char nomecidade[50];
    int populacao;         
    float area;
    float pib;
    int pontosturisticos;

    // carta 2 
    char estado2;
    char codigocarta2[5];
    char nomecidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Bem vindo ao Super Trunfo: Países!\n \n");
    printf("Insira apenas uma letra de 'A' a 'H' que representará o estado da primeira carta: \n");
    scanf(" %c", &estado);

    printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
    scanf("%s", codigocarta);

    printf("Digite o nome da cidade que sua carta representará:\n");
    scanf("%s", nomecidade);

    printf("Informe a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Informe a área total da cidade em Km²:\n");
    scanf("%f", &area);

    printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("\nVerifique as informações da primeira carta.\n");

    printf("Letra estado: %c\n", estado);
    printf("Código da carta 1: %s\n", codigocarta);
    printf("Cidade que a carta representa: %s\n", nomecidade);
    printf("População total da cidade: %d\n", populacao);
    printf("Área total da cidade em Km²: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Quantidade de pontos turísticos da cidade: %d\n \n", pontosturisticos);

    printf("Agora, vamos preencher a segunda carta. \n");

     printf("Insira apenas uma letra de 'A' a 'H' que representará o estado da primeira carta: \n");
    scanf(" %c", &estado2);

    printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade que sua carta representará:\n");
    scanf("%s", nomecidade2);

    printf("Informe a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Informe a área total da cidade em Km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    printf("\nVerifique as informações da segunda carta.\n");

    printf("Letra estado: %c\n", estado2);
    printf("Código da carta 1: %s\n", codigocarta2);
    printf("Cidade que a carta representa: %s\n", nomecidade2);
    printf("População total da cidade: %d\n", populacao2);
    printf("Área total da cidade em Km²: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos da cidade: %d\n", pontosturisticos2);


    return 0;
}