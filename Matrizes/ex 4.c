#include <stdio.h>
#include <stdlib.h>

int** calcularMatrizTransposta(int** matriz_original, int numero_linhas, int numero_colunas) {
    int** matriz_transposta = (int**)malloc(numero_colunas * sizeof(int*));

    for (int i = 0; i < numero_colunas; i++) {
        matriz_transposta[i] = (int*)malloc(numero_linhas * sizeof(int));

    }

    for (int i = 0; i < numero_linhas; i++) {
        for (int j = 0; j < numero_colunas; j++) {
            matriz_transposta[j][i] = matriz_original[i][j];
        }
    }

    return matriz_transposta;
}

void liberarMatriz(int** matriz, int numero_linhas) {
    for (int i = 0; i < numero_linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int numero_linhas, numero_colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &numero_linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &numero_colunas);

    int** matriz_original = (int**)malloc(numero_linhas * sizeof(int*));
    for (int i = 0; i < numero_linhas; i++) {
        matriz_original[i] = (int*)malloc(numero_colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < numero_linhas; i++) {
        for (int j = 0; j < numero_colunas; j++) {
            scanf("%d", &matriz_original[i][j]);
        }
    }

    int** matriz_transposta = calcularMatrizTransposta(matriz_original, numero_linhas, numero_colunas);
    printf("A transposta da matriz é:\n");
    for (int i = 0; i < numero_colunas; i++) {
        for (int j = 0; j < numero_linhas; j++) {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz_original, numero_linhas);
    liberarMatriz(matriz_transposta, numero_colunas);

    return 0;
}
