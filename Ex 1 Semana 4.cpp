#include <stdio.h>

float soma (float a, float b, float c) {
   
  return a + b + c;
}

int main() {
  float a, b,c, resultado;
  

  printf("Digite o valor de a");
  scanf("%f", &a);
  
  printf("Digite o valor de b");
  scanf("%f", &b);
  
  printf("Digite o valor de c");
  scanf("%f", &c);


  resultado = soma(a, b, c);

  printf("%f", resultado);
  
}