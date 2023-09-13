#include <stdio.h>

int elementoRepetido(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; 
        }
    }
    return 0; 
}

void imprimirUniao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Uniao dos vetores A e B: ");

    for (int i = 0; i < tamanhoA; i++) {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < tamanhoB; i++) {
        if (!elementoRepetido(A, tamanhoA, B[i])) {
            printf("%d ", B[i]);
        }
    }

    printf("\n");
}

int main() {
    int tamanhoA, tamanhoB;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoA);

    printf("Digite os elementos do vetor A:\n");
    int A[tamanhoA];
    for (int i = 0; i < tamanhoA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoB);

    printf("Digite os elementos do vetor B:\n");
    int B[tamanhoB];
    for (int i = 0; i < tamanhoB; i++) {
        scanf("%d", &B[i]);
    }

    imprimirUniao(A, tamanhoA, B, tamanhoB);

    return 0;
}
