#include <stdio.h>

// Declaração das funções (protótipos)
void moverTorre();
void moverBispo();
void moverRainha();

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}

// Implementação da função da Torre
void moverTorre() {
    printf("\nMovimento da Torre:\n");
    int x = 4, y = 0;

    for (int i = 0; i < 5; i++) {
        y++;
        printf("Casa %d: Direita -> (%d, %d)\n", i + 1, x, y);
    }
}

// Implementação da função do Bispo
void moverBispo() {
    printf("\nMovimento do Bispo:\n");
    int x = 7, y = 0;

    int i = 0;
    while (i < 5) {
        x--;
        y++;
        printf("Casa %d: Cima, Direita -> (%d, %d)\n", i + 1, x, y);
        i++;
    }
}

// Implementação da função da Rainha
void moverRainha() {
    printf("\nMovimento da Rainha:\n");
    int x = 3, y = 7;

    int i = 0;
    do {
        y--;
        printf("Casa %d: Esquerda -> (%d, %d)\n", i + 1, x, y);
        i++;
    } while (i < 8);
}