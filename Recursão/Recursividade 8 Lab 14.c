#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
  if (tam == 0) {
    return 0;
  } else {
    if (arr[tam - 1] % x == 0) {
      return arr[tam - 1] + divisiveis(arr, tam - 1, x);
  } else {
      return divisiveis(arr, tam - 1, x);
  }
 }
}

int main() {
    int arr[] = {3, 6, 12, 18, 70, 90};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    printf("%d\n", divisiveis(arr, tam, x)); 
 
    return 0;
}