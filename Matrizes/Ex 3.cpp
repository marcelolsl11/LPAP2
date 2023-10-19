#include <stdio.h>

int CalcularMatriz(int matriz[][10], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][i];
    }
    return soma;
}
bool CalcularDiagonal(int matriz[][10], int linhas, int colunas) {
    if (linhas != colunas) {
        return false;
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int linhas, colunas;
    printf("Coloque o número de linhas: \n");
    scanf("%d", &linhas);
    printf("Coloque o número de colunas: \n");
    scanf("%d", &colunas);
    if (linhas != colunas) {
        printf("A matriz não é quadrada.\n");
        return 1;
    }
    int testmatriz[10][10];
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &testmatriz[i][j]);
        }
    }
    //int resultado = CalcularMatriz(testmatriz, linhas);
    //printf("O resultado do traço da matriz quadrada é: %d\n", resultado);
  
    bool VerifDiagonal = CalcularDiagonal(testmatriz, linhas, colunas);
    if (VerifDiagonal) {
        printf("A matriz é uma matriz diagonal.\n");
    } else {
        printf("A matriz não é uma matriz diagonal.\n");
    }
    return 0;
}