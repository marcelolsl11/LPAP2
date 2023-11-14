#include <stdio.h>

void fib(int n, int *arr) {
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

  printf("O termo %d termo da sequência de Fibonacci é: %d\n", n, arr[n]);

    return 0;
}