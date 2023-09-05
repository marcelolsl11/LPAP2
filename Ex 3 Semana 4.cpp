#include <stdio.h>

void tabuada(int NumUser) {
  for (int i = 1 ; i <= 10; i++ ) {
    printf("%d * %d = %d\n", i, NumUser, NumUser * i);
  
  }
}

int main(){
 int NumUser;
    printf("Digite um número para sua tabuada de 1 a 9: ");
    scanf("%d", &NumUser);

    if (NumUser < 10) {
        int i;
        tabuada(NumUser);
        
    } else {
        printf("Número fora do intervalo (1 a 9).\n");
    }
}

  
  


















