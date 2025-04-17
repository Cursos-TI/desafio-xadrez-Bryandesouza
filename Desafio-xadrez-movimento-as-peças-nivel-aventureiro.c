#include <stdio.h>

// Constantes de movimento
#define TORRE_MOVIMENTOS 5
#define BISPO_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_MOVIMENTO_VERTICAL 2
#define CAVALO_MOVIMENTO_HORIZONTAL 1

// Protótipos
void moverTorre();
void moverBispo();
void moverRainha();
void moverCavalo();

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo();  // Nova função adicionada
    return 0;
}

// Torre se move para a direita
void moverTorre() {
    printf("\nMovimento da Torre:\n");
    int x = 4, y = 0;

    for (int i = 0; i < TORRE_MOVIMENTOS; i++) {
        y++;
        printf("Casa %d: Direita -> (%d, %d)\n", i + 1, x, y);
    }
}

// Bispo se move na diagonal: cima e direita
void moverBispo() {
    printf("\nMovimento do Bispo:\n");
    int x = 7, y = 0;
    int i = 0;

    while (i < BISPO_MOVIMENTOS) {
        x--;
        y++;
        printf("Casa %d: Cima, Direita -> (%d, %d)\n", i + 1, x, y);
        i++;
    }
}

// Rainha se move para a esquerda
void moverRainha() {
    printf("\nMovimento da Rainha:\n");
    int x = 3, y = 7;
    int i = 0;

    do {
        y--;
        printf("Casa %d: Esquerda -> (%d, %d)\n", i + 1, x, y);
        i++;
    } while (i < RAINHA_MOVIMENTOS);
}

// Cavalo se move em "L": duas casas para baixo e uma para a esquerda
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int x = 2, y = 2;  // Posição inicial arbitrária
    int i;

    // Loop para mover 2 casas para baixo
    for (i = 0; i < CAVALO_MOVIMENTO_VERTICAL; i++) {
        x++;
        printf("Etapa %d: Baixo -> (%d, %d)\n", i + 1, x, y);
        
        // Dentro do for, um while para a casa final: esquerda
        if (i == CAVALO_MOVIMENTO_VERTICAL - 1) {
            int j = 0;
            while (j < CAVALO_MOVIMENTO_HORIZONTAL) {
                y--;
                printf("Etapa %d: Esquerda -> (%d, %d)\n", i + j + 2, x, y);
                j++;
            }
        }
    }
}