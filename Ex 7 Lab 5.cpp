#include <stdio.h>

int countValor(int vetor[], int n) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        int elementoAtual = vetor[i];
        int repetido = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == elementoAtual) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            contador++;
        }
    }

    return contador; 
}

int main() {
    int vetor[] = {1, 1, 2, 2, 4, 4, 4, 5, 5, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int quantidade = countValor(vetor, tamanho);

    printf("A quantidade de valores diferentes no vetor é: %d\n", quantidade);

    return 0;
}
