#include <stdio.h>

// Protótipos das funções
void moverTorre();
void moverBispo();
void moverRainha();

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}

// Movimento da Torre: em linha reta (horizontal ou vertical)
void moverTorre() {
    printf("\nMovimento da Torre:\n");

    int casas = 4; // Número de casas para mover
    int x = 4, y = 0;

    for (int i = 0; i < casas; i++) {
        y++;  // Movendo para a direita
        printf("Direita\n");
        printf("Casa %d: (%d, %d)\n", i + 1, x, y);
    }
}

// Movimento do Bispo: apenas na diagonal
void moverBispo() {
    printf("\nMovimento do Bispo:\n");

    int casas = 4; // Número de casas para mover
    int x = 7, y = 0;

    for (int i = 0; i < casas; i++) {
        x--; // Movendo para cima
        y++; // e para a direita (diagonal)
        printf("Cima Direita\n");
        printf("Casa %d: (%d, %d)\n", i + 1, x, y);
    }
}

// Movimento da Rainha: pode ir em qualquer direção (linha reta ou diagonal)
void moverRainha() {
    printf("\nMovimento da Rainha:\n");

    int casas = 4; // Número de casas para mover
    int x = 3, y = 7;

    // Movendo na horizontal para a esquerda
    for (int i = 0; i < casas; i++) {
        y--;
        printf("Esquerda\n");
        printf("Casa %d: (%d, %d)\n", i + 1, x, y);
    }
}
