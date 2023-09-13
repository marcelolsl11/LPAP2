#include <stdio.h>

void encontrarIntersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Elementos em comum entre os vetores A e B: ");
    
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; 
            }
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

    encontrarIntersecao(A, tamanhoA, B, tamanhoB);

    return 0;
}