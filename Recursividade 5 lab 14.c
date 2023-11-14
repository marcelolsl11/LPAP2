#include <stdio.h>

float soma_array(float arr[], int tam) {
    if (tam == 0) { return 0; }
    else { return arr[tam-1] + soma_array(arr, tam-1); }
}

void mostrar(float arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%f ", arr[i]);
    }
}

int main() {
    float array[] = {1.7, 6.4, 7.5, 8.6, 9.6};
    int n = sizeof(array)/sizeof(array[0]);
    mostrar(array, n);
    printf("soma = %f\n", soma_array(array, n));
    return 0;
}