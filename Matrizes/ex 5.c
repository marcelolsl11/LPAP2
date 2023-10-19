#include <stdio.h>
#include <stdlib.h>

int** somarMatrizes(int** matriz_a, int** matriz_b, int tamanho_linha, int tamanho_coluna) {
    int** matriz_resultado = (int**)malloc(tamanho_linha * sizeof(int*));
    for (int i = 0; i < tamanho_linha; i++) {
        matriz_resultado[i] = (int*)malloc(tamanho_coluna * sizeof(int));
    }

    for (int i = 0; i < tamanho_linha; i++) {
        for (int j = 0; j < tamanho_coluna; j++) {
            matriz_resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    return matriz_resultado;
}

void liberarMatriz(int** matriz, int tamanho_linha) {
    for (int i = 0; i < tamanho_linha; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int tamanho_linha, tamanho_coluna;

    printf("Digite o numero de linhas das matrizes A e B: ");
    scanf("%d", &tamanho_linha);
    printf("Digite o numero de colunas das matrizes A e B: ");
    scanf("%d", &tamanho_coluna);

    int** matriz_a = (int**)malloc(tamanho_linha * sizeof(int*));
    for (int i = 0; i < tamanho_linha; i++) {
        matriz_a[i] = (int*)malloc(tamanho_coluna * sizeof(int));
    }

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < tamanho_linha; i++) {
        for (int j = 0; j < tamanho_coluna; j++) {
            scanf("%d", &matriz_a[i][j]);
        }
    }

    int** matriz_b = (int**)malloc(tamanho_linha * sizeof(int*));
    for (int i = 0; i < tamanho_linha; i++) {
        matriz_b[i] = (int*)malloc(tamanho_coluna * sizeof(int));
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < tamanho_linha; i++) {
        for (int j = 0; j < tamanho_coluna; j++) {
            scanf("%d", &matriz_b[i][j]);
        }
    }

    int** matriz_resultado = somarMatrizes(matriz_a, matriz_b, tamanho_linha, tamanho_coluna);

    printf("A matriz resultante da soma de A + B eh:\n");
    for (int i = 0; i < tamanho_linha; i++) {
        for (int j = 0; j < tamanho_coluna; j++) {
            printf("%d ", matriz_resultado[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz_a, tamanho_linha);
    liberarMatriz(matriz_b, tamanho_linha);
    liberarMatriz(matriz_resultado, tamanho_linha);

    return 0;
}