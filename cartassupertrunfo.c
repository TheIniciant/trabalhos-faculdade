#include <stdio.h>

    int main ()
    {
        //carta 1
        char estado [2];
        char codigocarta [4];
        char nomecidade [50];
        int populacao;
        float area;
        float pib;
        int pontosturisticos;

        //carta 2
        char estado2 [1];
        char codigocarta2 [3];
        char nomecidade2;
        int populacao2;
        float area2;
        float pib2 ;
        int pontosturisticos2;

        //exibição informações

        printf("Insira apenas uma letra que representará o estado da primeira carta: \n");
        scanf(" %.1c", &estado2);

        printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
        scanf("%.3s", codigocarta);

        printf("Digite o nome da cidade que sua carta representará:\n");
        scanf("%.50s", nomecidade);

        printf("Informe a população da cidade:\n");
        scanf("%.10i", &populacao);

        printf("Informe a área total da cidade em Km²:\n");
        scanf("%.10f", &area);

        printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
        scanf("%.10f", &pib);

        printf("Informe a quantidade de pontos turísticos da cidade: \n");
        scanf("%.10i", &pontosturisticos);

        //respostas
        printf("Verifique as informações da primeira carta.\n");

        printf("Letra estado: %.1c\n", estado);
        printf("Código da carta 1: %.3s\n", codigocarta);
        printf("Cidade que a carta representa:%.50s\n", nomecidade);
        printf("População total da cidade: %.10i\n", populacao);
        printf("Área total da cidade em Km²: %.10f\n", area);
        printf("PIB da cidade: %.10f\n", pib);
        printf("Quantidade de pontos turísticos da cidade: %.10i\n", pontosturisticos);

    //exibição informações segunda carta
      printf("Insira apenas uma letra que representará o estado da segunda carta: \n");
        scanf(" %.1c", &estado2);

        printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
        scanf("%.3s", codigocarta2);

        printf("Digite o nome da cidade que sua carta representará:\n");
        scanf("%.50s", nomecidade2);

        printf("Informe a população da cidade:\n");
        scanf("%.10i", &populacao2);

        printf("Informe a área total da cidade em Km²:\n");
        scanf("%.10f", &area2);

        printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
        scanf("%.10f", &pib2);

        printf("Informe a quantidade de pontos turísticos da cidade: \n");
        scanf("%.10i", &pontosturisticos2);

        //respostas
        printf("Verifique as informações da segunda carta.\n");

        printf("Letra estado: %.1c\n", estado2);
        printf("Código da carta 1: %.3s\n", codigocarta2);
        printf("Cidade que a carta representa:%.50s\n", nomecidade2);
        printf("População total da cidade: %.10i\n", populacao2);
        printf("Área total da cidade em Km²: %.10f\n", area2);
        printf("PIB da cidade: %.10f\n", pib2);
        printf("Quantidade de pontos turísticos da cidade: %.10i\n", pontosturisticos);


        return 0;


    }