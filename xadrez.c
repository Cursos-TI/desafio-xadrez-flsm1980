#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Trabalho de Flávio Maia

// Implementação das recursividades

// Torre
void movimentoTorre (int casas) {
    if (casas > 0) {
        printf(" Torre move para direita\n");
        movimentoTorre(casas - 1);
    }
}

// Bispo
void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Bispo move para cima\n");
        printf("Bispo move para direita\n");
        movimentoBispo(casas - 1);
    }
}

// Rainha
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Rainha move para a esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main() {

    // Nível Mestre - Movimentação das Peças
    
        movimentoTorre(5);
        printf("\n");
        movimentoBispo(5);
        printf("\n");
        movimentoRainha(8);
        printf("\n");

    // Nível Mestre - Movimentação do Cavalo
    
    printf("\n"); // pulando uma linha entre cada jogada

    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo para cima\n"); // Imprime 'Cavalo para cima' duas vezes
        }
        printf("Cavalo para direita\n"); // Imprime 'Cavalo para direita' uma vez
    }
    
    printf("\n"); // pulando uma linha entre cada jogada
        
    return 0;
}
