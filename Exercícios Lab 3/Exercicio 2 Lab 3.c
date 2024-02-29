#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int NumSorteado;
  int palpite;
  int NumTentativas = 0;

  srand(time(NULL));

  NumSorteado = 1 + rand() % 100;

  printf("Adivinhe o valor!\n");
  printf("%d\n", NumSorteado);

  while (1) {
    scanf("%d", &palpite);

    if (palpite < 1 || palpite > 100) {
      printf("insira um número entre 1 e 100.\n");
      NumTentativas++;
      continue;
    }

    int maior = (palpite > NumSorteado);
    int menor = (palpite < NumSorteado);
    int acertou = (palpite == NumSorteado);

    if (maior) {
      printf("Você chutou muito alto!\n");
      NumTentativas++;
      
    } else if (menor) {
      printf("Você chutou muito baixo!\n");
      NumTentativas++;
    } else {
      printf("Parabéns! Você acertou! na %d tentativas\n", NumTentativas);
      
      break;
    }
  }

  return 0;
}