#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int NumSorteado;
  int palpite;

  srand(time(NULL));

  NumSorteado = 1 + rand() % 100;

  printf("Adivinhe o valor!\n");

  while (1) {
    scanf("%d", &palpite);

    if (palpite < 1 || palpite > 100) {
      printf("insira um número entre 1 e 100.\n");
      continue;
    }

    int maior = (palpite > NumSorteado);
    int menor = (palpite < NumSorteado);
    int acertou = (palpite == NumSorteado);

    if (maior) {
      printf("Você chutou muito alto! O valor correto é %d.\n", NumSorteado);
    } else if (menor) {
      printf("Você chutou muito baixo! O valor correto é %d.\n", NumSorteado);
    } else {
      printf("Parabéns! Você acertou!\n");
      break;
    }
  }

  return 0;
}