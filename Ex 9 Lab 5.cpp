#include <stdio.h>

void encontrarDiferenca(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Elementos em A que nao estao em B: ");

    int encontrado;

    for (int i = 0; i < tamanhoA; i++) {
        encontrado = 0; 
        
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                encontrado = 1; 
                break;
            }
        }

        if (!encontrado) {
            printf("%d ", A[i]);
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

    encontrarDiferenca(A, tamanhoA, B, tamanhoB);

    return 0;
}