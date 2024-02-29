#include <stdio.h>

int main() {
  int NumUser;

  printf("Escreva um número:  \n");
  scanf("%d", &NumUser);

  printf("Os divisores de %d são: ", NumUser);

  for(int i = 1; i <= NumUser; i++) {
    if (NumUser % i == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}
