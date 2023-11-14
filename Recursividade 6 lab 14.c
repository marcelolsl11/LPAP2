#include <stdio.h>
#include <stdbool.h>

bool divisiveis(int arr[], int tam, int x) {
  if (tam == 0) {
    return true;
  } else {
    if (arr[tam - 1] % x == 0) {
      return divisiveis(arr, tam - 1, x);
  } else return false;
  }
}


int main() {
    int arr[] = {3, 6, 12, 18};
    int tam1 = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    printf("%d\n", divisiveis(arr, tam1, x)); 

    return 0;
}