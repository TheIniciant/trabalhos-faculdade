#include <stdio.h>
#include <stdlib.h> 

#define TAMANHO_PASSO_TORRE_BISPO 5 
#define TAMANHO_PASSO_RAINHA 8 

void imprimir_direcao(const char *direcao) {
    printf("%s\n", direcao);
}

void mover_recursivo_linear(const char *nome_peca, int passo_atual, int passo_max, const char *direcao1, const char *direcao2) {
    
    if (passo_atual == 1) {
        printf("Movimento da %s\n", nome_peca);
    }

    if (passo_atual > passo_max) {
        return; 
    }

    imprimir_direcao(direcao1);

    if (direcao2 != NULL) {
        imprimir_direcao(direcao2);
    }
    
    mover_recursivo_linear(nome_peca, passo_atual + 1, passo_max, direcao1, direcao2);
}

void mover_bispo_loops_aninhados() {
    printf("Movimento do Bispo\n");
    for (int vert_passo = 1; vert_passo <= TAMANHO_PASSO_TORRE_BISPO; vert_passo++) { 
        
        for (int horiz_passo = 1; horiz_passo <= TAMANHO_PASSO_TORRE_BISPO; horiz_passo++) {
            
            if (vert_passo == horiz_passo) {
                imprimir_direcao("Cima");
                imprimir_direcao("Direita");
                
                break; 
            }
        }
    }
}

void mover_cavalo_complexo() {
    printf("Movimento do Cavalo\n");
    int dL_opcoes[] = {-2, -1};
    int dC_opcoes[] = {1, 2};  
    
    for (int i = 0; i < 2; i++) {
        int dL = dL_opcoes[i];
        int dC = dC_opcoes[i];
        
        for (int j = 1; j <= abs(dL) + abs(dC); j++) {
            
            if (abs(dL) == 2 && j == 2) { 
                 imprimir_direcao("Cima");
            } else if (abs(dC) == 2 && j == 2) { 
                 imprimir_direcao("Direita");
            } else {
                 continue; 
            }
            
            if (j == 2) { 
                if (abs(dL) == 1) {
                    imprimir_direcao("Cima");
                } else if (abs(dC) == 1) {
                    imprimir_direcao("Direita");
                }
                
                break; 
            }
        }
    }
}

int main() {
    
    mover_recursivo_linear("Torre", 1, TAMANHO_PASSO_TORRE_BISPO, "Direita", NULL);
    printf("\n"); 

    mover_recursivo_linear("Bispo", 1, TAMANHO_PASSO_TORRE_BISPO, "Cima", "Direita");
    printf("\n"); 

    mover_recursivo_linear("Rainha", 1, TAMANHO_PASSO_RAINHA, "Esquerda", NULL);
    printf("\n"); 
    
    mover_cavalo_complexo(); 
    printf("\n"); 

    mover_bispo_loops_aninhados();
    
    return 0;
}