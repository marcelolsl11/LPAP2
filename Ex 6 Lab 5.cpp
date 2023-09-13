#include <stdio.h>

int busca_qtde(int v[], int n, int e) {
    int contador = 0;  

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            contador++; 
        }
    }
    
    return contador;  
}

int main() {
    int vetor[] = {1, 2, 2, 3, 4, 2, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 2;
    
    int quantidade = busca_qtde(vetor, tamanho, elemento);
    
    printf("O elemento %d é mostrado %d vezes no vetor.\n", elemento, quantidade);
    
    return 0;
}
