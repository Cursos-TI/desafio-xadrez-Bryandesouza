#include <stdio.h>

// Protótipos das funções
void moverTorre();
void moverBispo();
void moverRainha();

int main() {
    moverTorre();   // Movimento da Torre com for
    moverBispo();   // Movimento do Bispo com while
    moverRainha();  // Movimento da Rainha com do-while
    return 0;
}

// Torre se move 5 casas para a direita
void moverTorre() {
    printf("\nMovimento da Torre:\n");
    int x = 4, y = 0;

    for (int i = 0; i < 5; i++) {
        y++; // Move para a direita (aumenta y)
        printf("Casa %d: Direita -> (%d, %d)\n", i + 1, x, y);
    }
}

// Bispo se move 5 casas na diagonal: cima e direita
void moverBispo() {
    printf("\nMovimento do Bispo:\n");
    int x = 7, y = 0;

    int i = 0;
    while (i < 5) {
        x--; // Cima (diminui x)
        y++; // Direita (aumenta y)
        printf("Casa %d: Cima, Direita -> (%d, %d)\n", i + 1, x, y);
        i++;
    }
}

// Rainha se move 8 casas para a esquerda
void moverRainha() {
    printf("\nMovimento da Rainha:\n");
    int x = 3, y = 7;

    int i = 0;
    do {
        y--; // Move para a esquerda (diminui y)
        printf("Casa %d: Esquerda -> (%d, %d)\n", i + 1, x, y);
        i++;
    } while (i < 8);
}

