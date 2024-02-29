#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int NumSorteado;
  int palpite;
  int NumMaxTentativas = 6;

  srand(time(NULL));

  NumSorteado = 1 + rand() % 100;

  printf("Adivinhe o valor!\n");
  printf("%d\n", NumSorteado);

  for(int tentativas = 1; tentativas < NumMaxTentativas; tentativas++) {
    printf("Você está na %d de 5 tentativas\n", tentativas);
    scanf("%d", &palpite);

    if (palpite < 1 || palpite > 100) {
      printf("insira um número entre 1 e 100.\n");
      continue;
    }

    int maior = (palpite > NumSorteado);
    int menor = (palpite < NumSorteado);
    int acertou = (palpite == NumSorteado);

    if (maior) {
  
      printf("Você chutou muito alto! Você está na %d de 5 tentativas\n", tentativas);
      
      
    } else if (menor) {
     
      printf("Você chutou muito baixo! Você está na %d de 5 tentativas\n", tentativas);
      
    } else {
      
      printf("Parabéns! Você acertou! Você acertou com %d de 5 tentativas\n", tentativas);
      
      break;
    }
  }

  return 0;
}