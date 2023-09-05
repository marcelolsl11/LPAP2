#include <stdio.h>

int DN(int N, int D) {
    if (N % D == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int QtdDiv(int M) {
    int count = 0;
    for (int i = 1; i <= M; i++) {
        if (DN(M, i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int qtdDivisores = QtdDiv(numero);
    
    printf("O número %d possui %d divisores.\n", numero, qtdDivisores);
    
    return 0;
}
