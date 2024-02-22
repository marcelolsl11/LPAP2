#include <stdio.h>

int main() {
  float fh ;
  float cs;
  
  printf("Coloque o valor da temperatura em Celsius desejada \n");
  scanf("%f", &cs);

  fh = (9.0/5.0 * cs) + 32;
  
  printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.", cs, fh);


    
 return 0;
}