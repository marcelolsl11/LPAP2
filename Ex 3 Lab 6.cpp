#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true;
        }
    }
    return false; 
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
    printf("Digite o elemento a ser verificado: ");
    scanf("%d", &elemento);

    if (contem(vetor, n, elemento)) {
        printf("O elemento %d esta presente no vetor.\n", elemento);
    } else {
        printf("O elemento %d nao esta presente no vetor.\n", elemento);
    }

    return 0;
}