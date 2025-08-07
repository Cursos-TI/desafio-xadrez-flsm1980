#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Trabalho de Flávio Maia

int main() {
    // Nível Novato - Movimentação das Peças
    
    int bispo = 0, rainha = 0; // Declaração das variáveis

    // Implementação de Movimentação da Torre
    for (int torre = 0; torre < 5; torre++) {
        printf("Torre move para a direita\n"); // imprime a direção do movimento
    }

    printf("\n"); // pulando uma linha entre cada jogada

    // Implementação de Movimentação do Bispo
    do {
        printf("Bispo move para cima & direita\n"); // imprime a direção do movimento
        bispo++;
    } while (bispo < 5);

    printf("\n"); // pulando uma linha entre cada jogada

    // Implementação de Movimentação da Rainha
    while (rainha < 8) {
        printf("Rainha move para a esquerda\n"); // imprime a direção do movimento
        rainha++;
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    
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
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
