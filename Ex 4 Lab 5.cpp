#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return i;  
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int elemento;
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    int indice = busca_primeiro(vetor, n, elemento);

    if (indice != -1) {
        printf("O elemento %d foi encontrado no indice %d.\n", elemento, indice);
    } else {
        printf("-1");
    }

    return 0;
}