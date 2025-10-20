#include <stdio.h>

int main ()
{
    //carta 1
    char pais;
    char codigocarta [4];
    char paiscarta [51];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibper;

    //carta 2
    char pais2_letra; // Nome alterado de 'pais2' para evitar conflito com 'paiscarta2' na leitura de string
    char codigocarta2 [4];
    char paiscarta2 [51];
    int populacao2;
    float area2;
    float pib2 ;
    int pontosturisticos2;
    float densidade2;
    float pibper2;

    int escolhajogador;

    //exibição informações

    printf("Insira apenas uma letrade A a H que representará o País da primeira carta: \n");
    scanf(" %c", &pais);

    printf("Agora, digite a letra do País seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
    scanf("%3s", codigocarta);

    printf("Digite o nome do estado que sua carta representará:\n");
    scanf("%s", paiscarta);

    printf("Informe a população do País:\n");
    scanf("%i", &populacao);

    printf("Informe a área total do País em Km²:\n");
    scanf("%f", &area);

    printf("Informe o PIB (Produto Interno Bruto do País): \n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos do País: \n");
    scanf("%i", &pontosturisticos);
    densidade = populacao / area;
    pibper = pib / populacao;

    //respostas
    printf("Verifique as informações da primeira carta.\n");

    printf("Letra País:%c\n", pais);
    printf("Código da carta 1: %s\n", codigocarta);
    printf("País que a carta representa:%s\n", paiscarta);
    printf("População total do País: %i\n", populacao);
    printf("Área total do País em Km²: %.2f km²\n", area);
    printf("PIB do País: %.2f bilhões de reais\n", pib);
    printf("Quantidade de pontos turísticos do País: %i\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibper);


    //exibição informações segunda carta
    printf("Insira apenas uma letra de A a H (não escolha a mesma letra da primeira carta) que representará o País da segunda carta: \n");
    scanf(" %c", &pais2_letra);

    printf("Agora, digite a letra do País seguido de um número de 01 a 04, este será o código de sua carta (ex: B01, A03):\n");
    scanf("%3s", codigocarta2);

    printf("Digite o nome da País que sua carta representará:\n");
    scanf("%s", paiscarta2); // Corrigido para usar a variável string

    printf("Informe a população da País:\n");
    scanf("%i", &populacao2);

    printf("Informe a área total do País em Km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB (Produto Interno Bruto do País): \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos do País: \n");
    scanf("%i", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;


    //respostas
    printf("Verifique as informações da segunda carta.\n");

    printf("Letra País: %c \n", pais2_letra);
    printf("Código da carta 2: %s \n", codigocarta2);
    printf("País que a carta representa: %s \n", paiscarta2); // Corrigido
    printf("População total da País: %i \n", populacao2);
    printf("Área total da País em Km²: %.2f km²\n", area2);
    printf("PIB da País: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos da País: %i \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibper2);

    //Menu interativo jogador

    printf("\nEscolha um atributo para comparação das cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número do atributo: ");
    scanf("%i", &escolhajogador);

    //Exibição informação das cartas do número escolhido
    printf("\n--- Resultado da Comparação ---\n");

    switch (escolhajogador)
    {
        case 1:
            printf("Você escolheu comparar atributo: População\n");
            printf("Valor referente ao atributo carta 1: %i\n", populacao);
            printf("Valor referente ao atributo carta 2: %i\n", populacao2);

            if (populacao > populacao2) {
                printf("Nome do país vencedor: %s (Carta 1)\n", paiscarta);
            } else if (populacao < populacao2) {
                printf("Nome do país vencedor: %s (Carta 2)\n", paiscarta2);
            } else {
                printf("Empate!!\n");
            }
            break;

        case 2:
            printf("Você escolheu comparar atributo: Área\n");
            printf("Valor referente ao atributo carta 1: %.2f\n", area);
            printf("Valor referente ao atributo carta 2: %.2f\n", area2);

            if (area > area2) {
                printf("Nome do país vencedor: %s (Carta 1)\n", paiscarta);
            } else if (area < area2) {
                printf("Nome do país vencedor: %s (Carta 2)\n", paiscarta2);
            } else {
                printf("Empate!!\n");
            }
            break;

        case 3:
            printf("Você escolheu comparar atributo: PIB\n");
            printf("Valor referente ao atributo carta 1: %.2f\n", pib);
            printf("Valor referente ao atributo carta 2: %.2f\n", pib2);

            if (pib > pib2) {
                printf("Nome do país vencedor: %s (Carta 1)\n", paiscarta);
            } else if (pib < pib2) {
                printf("Nome do país vencedor: %s (Carta 2)\n", paiscarta2);
            } else {
                printf("Empate!!\n");
            }
            break;

        case 4:
            printf("Você escolheu comparar atributo: Pontos Turísticos\n");
            printf("Valor referente ao atributo carta 1: %i\n", pontosturisticos);
            printf("Valor referente ao atributo carta 2: %i\n", pontosturisticos2);

            if (pontosturisticos > pontosturisticos2) {
                printf("Nome do país vencedor: %s (Carta 1)\n", paiscarta);
            } else if (pontosturisticos < pontosturisticos2) {
                printf("Nome do país vencedor: %s (Carta 2)\n", paiscarta2);
            } else {
                printf("Empate!!\n");
            }
            break;

        case 5:
            printf("Você escolheu comparar atributo: Densidade Demográfica\n");
            printf("Valor referente ao atributo carta 1: %.2f\n", densidade);
            printf("Valor referente ao atributo carta 2: %.2f\n", densidade2);

            if (densidade > densidade2) {
                printf("Nome do país vencedor: %s (Carta 1)\n", paiscarta);
            } else if (densidade < densidade2) {
                printf("Nome do país vencedor: %s (Carta 2)\n", paiscarta2);
            } else {
                printf("Empate!!\n");
            }
            break;

        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}