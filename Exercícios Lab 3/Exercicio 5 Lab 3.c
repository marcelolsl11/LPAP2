#include <stdio.h>

int main() {
  int NumUser;
  int SumForUser = 0;

  printf("Escreva um número:  \n");
  scanf("%d", &NumUser);

  for(int i = 1; i <= NumUser; i++) {
    if (NumUser % i == 0) {
      SumForUser += i;
     
    }
  }
  if(SumForUser == NumUser * 2){
    printf("é um número perfeito!\n");
  }
  else {printf("não é um número perfeito\n");}

  
  
return 0;
}
