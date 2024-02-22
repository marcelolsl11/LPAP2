#include <stdio.h>
#include <math.h>

int main() {
  float raio_circulo;
  float calc_area_circulo;
  printf ("coloque o Raio do circulo \n");
  scanf("%f", &raio_circulo);

  calc_area_circulo = M_PI * pow(raio_circulo, 2);
  
  printf("%.2f", calc_area_circulo);
  
  return 0;
}