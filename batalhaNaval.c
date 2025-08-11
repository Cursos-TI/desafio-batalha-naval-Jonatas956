#include <stdio.h>

// Desafio Batalha Naval
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[5][5] = {0}; // Tabuleiro 5x5 inicializado com 0

    // Posição do navio vertical (coluna fixa, linhas variando)
    int col_v = 1; // coluna 1
    int linha_inicio_v = 0; // começa na linha 0

    printf("Navio Vertical (3 partes):\n");
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicio_v + i][col_v] = 1;
        printf("Parte %d: (%d, %d)\n", i + 1, linha_inicio_v + i, col_v);
    }

    // Posição do navio horizontal (linha fixa, colunas variando)
    int linha_h = 4; // linha 4
    int col_inicio_h = 2; // começa na coluna 2

    printf("\nNavio Horizontal (3 partes):\n");
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][col_inicio_h - i] = 2;
        printf("Parte %d: (%d, %d)\n", i + 1, linha_h, col_inicio_h - i);
    }

    return 0;
}


