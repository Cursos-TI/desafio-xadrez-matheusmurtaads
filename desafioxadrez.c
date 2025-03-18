#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Definição de constantes para movimentação
#define BISPO_MOVIMENTO 5
#define TORRE_MOVIMENTO 5
#define RAINHA_MOVIMENTO 8
#define CAVALO_MOVIMENTO_VERTICAL 2
#define CAVALO_MOVIMENTO_HORIZONTAL 1

// Função recursiva para movimentação do Bispo
void moverBispo(int passo) {
    if (passo > BISPO_MOVIMENTO) return;
    printf("Passo %d: Diagonal superior direita\n", passo);
    moverBispo(passo + 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int passo) {
    if (passo > TORRE_MOVIMENTO) return;
    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int passo) {
    if (passo > RAINHA_MOVIMENTO) return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

// Função para movimentação do Cavalo
void moverCavalo() {
    int i, j;
    for (i = 1, j = 1; i <= CAVALO_MOVIMENTO_VERTICAL || j <= CAVALO_MOVIMENTO_HORIZONTAL; i++, j++) {
        if (i <= CAVALO_MOVIMENTO_VERTICAL) {
            printf("Passo %d: Para cima\n", i);
        }
        if (j <= CAVALO_MOVIMENTO_HORIZONTAL) {
            printf("Passo %d: Para direita\n", j);
        }
        if (i == CAVALO_MOVIMENTO_VERTICAL && j == CAVALO_MOVIMENTO_HORIZONTAL) {
            break; // Para quando ambos os movimentos forem concluídos
        }
    }
    printf("---\n");
}

int main() {
    int opcao;
    
    do {
        printf("\n=== Desafio de Xadrez - MateCheck ===\n");
        printf("1 - Movimentação do Bispo\n");
        printf("2 - Movimentação da Torre\n");
        printf("3 - Movimentação da Rainha\n");
        printf("4 - Movimentação do Cavalo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Movimentação do Bispo:\n");
                moverBispo(1);
                break;
            case 2:
                printf("Movimentação da Torre:\n");
                moverTorre(1);
                break;
            case 3:
                printf("Movimentação da Rainha:\n");
                moverRainha(1);
                break;
            case 4:
                printf("Movimentação do Cavalo:\n");
                moverCavalo();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida, tente novamente!\n");
        }
    } while (opcao != 0);
    
    return 0;
}