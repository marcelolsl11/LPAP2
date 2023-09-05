# include <stdio.h>
# include <math.h>

float somatorio(int NumUser) {
	float soma = 0;
	
	for (float i = 1; i <= NumUser; i++) {
		soma += i / pow(i, 2) * pow(-1, i + 1);
}
	return soma;
}

int main() {
	int NumUser;
  printf("Digite um valor\n");
	scanf("%d", &NumUser);
	
	float resultado = somatorio(NumUser);
	printf("%f", resultado);
	return 0;
}