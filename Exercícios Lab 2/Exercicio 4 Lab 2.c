#include <stdio.h>
#include <math.h>

int main() {
  float catet1;
  float catet2;

   
  printf("Coloque os valores dos dois catetos do triângulo retângulo\n");
  
  printf("Cateto 1\n");
  scanf("%f", &catet1);

  printf("Cateto 2\n");
  scanf("%f", &catet2);


  catet1 = pow(catet1, 2);
  catet2 = pow(catet2, 2);
  
  float soma_dos_quadrados = catet1 + catet2;

  float calc_hipotenusa = sqrt(soma_dos_quadrados);
  
  printf("%.2f", calc_hipotenusa);
    
  return 0;
}