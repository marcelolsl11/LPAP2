#include <stdio.h>>

float c2f(float celsius) {
  return (celsius * 9.0/5.0) + 32.00;
  
}

float f2c(float fahreinheit){
  return (fahreinheit - 32.0) * 5.0 / 9.0;
  
}

int main (){
  int escolha;
  float temperatura;

  printf("Digite uma opção: \n");
  printf("(1) Converter de Celsius para Fahrenheit\n");
  printf("(2) Converter de Fahrenheit para Celsius\n");

  scanf("%d", &escolha);

  switch (escolha) {

    case 1:
      printf("digite a temperatura em Celsius\n");
      scanf("%f", &temperatura);
      printf("%2.f Celsius equivale a %2.f Fahrenheit \n", temperatura, c2f(temperatura));
      break;
    
    case 2: 
      printf("digite a temperatura em Celsius\n");
      scanf("%f", &temperatura);
      printf("%2.f Fahrenheit equivale a %2.f Celsius \n", temperatura,f2c(temperatura));
      break;
    
    default: 
        printf("opção invalida");

    
  }
  

  
}