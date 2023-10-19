#include <stdio.h>
#include <stdlib.h>

void liberar_matriz_e_vetor(int** matriz, int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(vetor);
}

int* multiplicar_matriz_por_vetor(int* matriz_de_entrada, int* vetor_de_entrada, int n) {
    int* vetor_de_saida = (int*)malloc(n * sizeof(int));

    if (vetor_de_saida == NULL) {
        printf("Erro ao alocar memória para o vetor de saída.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        vetor_de_saida[i] = 0;
        for (int j = 0; j < n; j++) {
            vetor_de_saida[i] += matriz_de_entrada[i * n + j] * vetor_de_entrada[j];
        }
    }

    return vetor_de_saida;
}

int main() {
    int n;

    printf("Digite o tamanho da matriz e do vetor: ");
    scanf("%d", &n);

    int** matriz_de_entrada = (int**)malloc(n * sizeof(int*));
    if (matriz_de_entrada == NULL) {
        printf("Erro ao alocar memória para a matriz de entrada.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        matriz_de_entrada[i] = (int*)malloc(n * sizeof(int));
        if (matriz_de_entrada[i] == NULL) {
            printf("Erro ao alocar memória para a linha %d da matriz de entrada.\n", i);
            exit(1);
        }
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz_de_entrada[i][j]);
        }
    }

    int* vetor_de_entrada = (int*)malloc(n * sizeof(int));
    if (vetor_de_entrada == NULL) {
        printf("Erro ao alocar memória para o vetor de entrada.\n");
        exit(1);
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor_de_entrada[i]);
    }

    int* vetor_de_saida = multiplicar_matriz_por_vetor(matriz_de_entrada, vetor_de_entrada, n);

    printf("O vetor resultante da multiplicacao da matriz pelo vetor eh:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor_de_saida[i]);
    }
    printf("\n");

    liberar_matriz_e_vetor(matriz_de_entrada, vetor_de_entrada, n);
    free(vetor_de_saida);

    return 0;
}