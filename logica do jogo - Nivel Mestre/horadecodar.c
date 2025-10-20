É hora de aplicar os conceitos avançados estudados para desenvolver um jogo de Maior, Menor ou Igual contra o computador. Utilizando operadores ternários, estruturas de decisão if, if-else e switch, você criará um programa em que o jogador escolhe um número e um tipo de comparação (maior, menor ou igual) para competir contra um número gerado aleatoriamente pelo computador. Esse exercício consolidará seu entendimento de como integrar diferentes estruturas de decisão para criar lógicas mais complexas e dinâmicas.

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main () {

int escolhacomputador, escolhajogador, resultado;
char tipocomparacao;

// gerar numero aleatório
srand (time (0));
escolacomputador = rand () % 100 + 1;

//menu inicial

printf("Bem vindo ao jogo maior, menor ou igual\n");
printf("Você deve escolher uma das opções abaixo:\n");
printf("M. Maior\n");
printf("N. Menor\n"):
printf("I. Igual\n");

printf("Escolha o tipo de comparação.\n");
scanf("%s",tipocomparacao);
printf("Você escolheu a opção: %s\n", tipocomparacao);

printf("Agora, insira um número entre 1 a 100:\n");
scanf("%d", escolhajogador);

printf("O número do computador é: %d\n", escolhacomputador);

switch (tipocomparacao)
{
    case 'm':
    case 'M': 
        resultado = escolhajogador > escolhacomputador ? 1 : 0;
        break;

    case 'n':
    case 'N':
        resultado = escolhajogador < escolhacomputador ? 1 : 0;
        break;

    case 'i':
    case 'I':
        resultado = escolhajogador == escolhacomputador ? 1 : 0;
        break;

    default:
        printf("Opção inválida\n");
        break;

} 
    printf("O número do computador é: %d\n", escolhacomputador);
    printf("O número do jogador é: %d\n", escolhajogador); 
    
if (resultado == 1)
{
    printf("Você venceu!\n");

} else (resultado == 0)
    printf("Que pena, você perdeu!\n");

return 0;
} 