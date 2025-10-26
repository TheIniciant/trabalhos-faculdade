#include <stdio.h>

int main() {
//peças Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita. 
//Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita"). 
//Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.


//váriaveis; T = Torre, B = Bispo, R = Rainha
int t;
int b = 1;
int r = 1;
int c = 0;

//for para simular movimentos torre

    for (t = 1; t < 6; t++)
{
    printf("Torre moveu para direita\n");
}

// do-while para simular movimentos bispo
do {
    printf("Bispo moveu para cima e direita\n");
    b++;

} while (b < 6);

// while para simular movimentos rainha
while (r < 9){

    printf("Rainha moveu-se para a esquerda\n");
    r++;

}

do {
    printf("Cavalo moveu-se para baixo\n");
    c++;
    
    for ( int j = 0; j < c / 2; j++)
{
    printf("Cavalo moveu-se para esquerda\n");
}
} while (c < 2 );


    return 0;
}