#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 4

int main() {
    // Tabuleiro 10x10 
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Posição inicial do navio vertical 
    int navio_vertical_x = 2;
    int navio_vertical_y = 3;

    // Posição inicial do navio horizontal 
    int navio_horizontal_x = 6;
    int navio_horizontal_y = 1;

    // Exibir coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical (coluna %d):\n", navio_vertical_y);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    printf("\n");

    // Exibir coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal (linha %d):\n", navio_horizontal_x);
    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + j);
    }

    return 0;
}