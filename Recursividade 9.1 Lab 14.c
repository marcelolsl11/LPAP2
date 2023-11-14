#include <stdio.h>

//O motivo da demora é a má otimização da função recursiva 
//Além de que apartir do número 47 o número inteiro (int) estora seu valor

void fib(int n, int* arr) {
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int arr[n + 1];
    fib(n, arr);

    printf("O termo %d da sequência de Fibonacci é: %d\n", n, arr[n]);

    return 0;
}