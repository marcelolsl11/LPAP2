#include <stdio.h>
#include <math.h>

int main(void) {
  float peso;
  float altura;
  float imc;
  printf("Calculador do IMC\n");
  printf("Coloque seu peso\n");
  scanf("%f", &peso);
  printf("Coloque sua altura\n");
  scanf("%f", &altura);

  imc = peso / pow(altura, 2);
  
  printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f \n", altura, peso, imc);
  
  return 0;
}