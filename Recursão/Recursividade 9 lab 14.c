#include <stdio.h>


int fib(int n) {
  if (n == 0) {
      return 0;
  } else if (n == 1) {
      return 1;
  } else {
      return fib(n - 1) + fib(n - 2);
    }
}

int main() {
  int n;
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  printf("O termo %d da sequência de Fibonacci é: %d\n", n, fib(n));
  return 0;
}