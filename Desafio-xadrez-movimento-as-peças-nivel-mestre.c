#include <stdio.h>

// Constantes de movimento
#define TORRE_MOVIMENTOS 5
#define BISPO_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_MOVIMENTO_VERTICAL 2
#define CAVALO_MOVIMENTO_HORIZONTAL 1

// Protótipos
void moverTorreRecursivo(int x, int y, int passosRestantes, int passo);
void moverBispoRecursivo(int x, int y, int passosRestantes, int passo);
void moverBispoComLoopsAninhados(int x, int y, int passos);
void moverRainhaRecursivo(int x, int y, int passosRestantes, int passo);
void moverCavaloComplexo(int x, int y);

int main() {
    printf("\nMovimento da Torre (Recursivo):\n");
    moverTorreRecursivo(4, 0, TORRE_MOVIMENTOS, 1);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(7, 0, BISPO_MOVIMENTOS, 1);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoopsAninhados(7, 0, BISPO_MOVIMENTOS);

    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(3, 7, RAINHA_MOVIMENTOS, 1);

    printf("\nMovimento do Cavalo (Loops Complexos):\n");
    moverCavaloComplexo(4, 4);

    return 0;
}

// -----------------------------------
// Função recursiva da Torre
void moverTorreRecursivo(int x, int y, int passosRestantes, int passo) {
    if (passosRestantes <= 0) return;
    y++; // Direita
    printf("Casa %d: Direita -> (%d, %d)\n", passo, x, y);
    moverTorreRecursivo(x, y, passosRestantes - 1, passo + 1);
}

// -----------------------------------
// Função recursiva do Bispo (diagonal cima-direita)
void moverBispoRecursivo(int x, int y, int passosRestantes, int passo) {
    if (passosRestantes <= 0) return;
    x--; y++;
    printf("Casa %d: Cima, Direita -> (%d, %d)\n", passo, x, y);
    moverBispoRecursivo(x, y, passosRestantes - 1, passo + 1);
}

// -----------------------------------
// Bispo com loops aninhados: externo = vertical (x), interno = horizontal (y)
void moverBispoComLoopsAninhados(int x, int y, int passos) {
    int passo = 1;
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < 1; j++) { // Apenas 1 passo na diagonal por iteração
            x--; y++;
            printf("Casa %d: Cima, Direita -> (%d, %d)\n", passo, x, y);
            passo++;
        }
    }
}

// -----------------------------------
// Função recursiva da Rainha (esquerda)
void moverRainhaRecursivo(int x, int y, int passosRestantes, int passo) {
    if (passosRestantes <= 0) return;
    y--; // Esquerda
    printf("Casa %d: Esquerda -> (%d, %d)\n", passo, x, y);
    moverRainhaRecursivo(x, y, passosRestantes - 1, passo + 1);
}

// -----------------------------------
// Cavalo com loops complexos: duas casas para cima, uma para a direita
void moverCavaloComplexo(int x, int y) {
    int passosFeitos = 0;
    int i, j;

    for (i = 0; i < CAVALO_MOVIMENTO_VERTICAL + 2; i++) {
        if (passosFeitos >= CAVALO_MOVIMENTO_VERTICAL + CAVALO_MOVIMENTO_HORIZONTAL)
            break;

        if (i < CAVALO_MOVIMENTO_VERTICAL) {
            x--; // Cima
            passosFeitos++;
            printf("Etapa %d: Cima -> (%d, %d)\n", passosFeitos, x, y);
        }

        for (j = 0; j < 1; j++) {
            if (passosFeitos == CAVALO_MOVIMENTO_VERTICAL) {
                y++; // Direita
                passosFeitos++;
                printf("Etapa %d: Direita -> (%d, %d)\n", passosFeitos, x, y);
                break;
            }
        }
    }
}