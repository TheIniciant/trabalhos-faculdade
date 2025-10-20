#include <stdio.h>

    int main ()
    {
        //carta 1
        char estado;
        char codigocarta [4];
        char nomecidade [51];
        int populacao;
        float area;
        float pib;
        int pontosturisticos;
        float densidade;
        float pibper;

        //carta 2
        char estado2;
        char codigocarta2 [4];
        char nomecidade2 [51];
        int populacao2;
        float area2;
        float pib2 ;
        int pontosturisticos2;
        float densidade2;
        float pibper2;

        //exibição informações

        printf("Insira apenas uma letrade A a H que representará o estado da primeira carta: \n");
        scanf("%c", &estado);

        printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
        scanf("%3s", codigocarta);

        printf("Digite o nome da cidade que sua carta representará:\n");
        scanf("%s", nomecidade);

        printf("Informe a população da cidade:\n");
        scanf("%i", &populacao);

        printf("Informe a área total da cidade em Km²:\n");
        scanf("%f", &area);

        printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
        scanf("%f", &pib);

        printf("Informe a quantidade de pontos turísticos da cidade: \n");
        scanf("%i", &pontosturisticos);
        densidade = populacao / area;
        pibper = pib / populacao;

        //respostas
        printf("Verifique as informações da primeira carta.\n");

        printf("Letra estado:%c\n", estado);
        printf("Código da carta 1: %s\n", codigocarta);
        printf("Cidade que a carta representa:%s\n", nomecidade);
        printf("População total da cidade: %i\n", populacao);
        printf("Área total da cidade em Km²: %f km²\n", area);
        printf("PIB da cidade: %f bilhões de reais\n", pib);
        printf("Quantidade de pontos turísticos da cidade: %i\n", pontosturisticos);
        printf("Densidade populacional: %f hab/km² \n", densidade);
        printf("PIB per Capita: %f reais\n", pibper);


    //exibição informações segunda carta
      printf("Insira apenas uma letra de A a H (não escolha a mesma letra da primeira carta) que representará o estado da segunda carta: \n");
        scanf(" %c", &estado2);

        printf("Agora, digite a letra do Estado seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
        scanf("%3s", codigocarta2);

        printf("Digite o nome da cidade que sua carta representará:\n");
        scanf("%50s", nomecidade2);

        printf("Informe a população da cidade:\n");
        scanf("%i", &populacao2);

        printf("Informe a área total da cidade em Km²:\n");
        scanf("%f", &area2);

        printf("Informe o PIB (Produto Interno Bruto da cidade): \n");
        scanf("%f", &pib2);

        printf("Informe a quantidade de pontos turísticos da cidade: \n");
        scanf("%i", &pontosturisticos2);
        
        densidade2 = populacao2 / area2;
        pibper2 = pib2 / populacao2;

        
        //respostas
        printf("Verifique as informações da segunda carta.\n");

        printf("Letra estado: %c \n", estado2);
        printf("Código da carta 1: %3s \n", codigocarta2);
        printf("Cidade que a carta representa: %50s \n", nomecidade2);
        printf("População total da cidade: %i \n", populacao2);
        printf("Área total da cidade em Km²: %f km²\n", area2);
        printf("PIB da cidade: %f bilhões de reais\n", pib2);
        printf("Quantidade de pontos turísticos da cidade: %i \n", pontosturisticos2);
        printf("Densidade populacional: %f hab/km² \n", densidade2);
        printf("PIB per Capita: %f reais \n", pibper2);

        return 0;


    }
