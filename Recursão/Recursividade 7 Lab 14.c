#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
  if (tam == 0) {
    return 0;
  } else {if (arr[tam - 1] % x == 0) {
    
  return 1 + divisiveis(arr, tam - 1, x);
    } 
    else {
        return divisiveis(arr, tam - 1, x);
      }
    }
}

int main() {
  int arr1[] = {3, 6, 12, 18};
  int tam1 = sizeof(arr1) / sizeof(arr1[0]);
  int x = 3;
  printf("%d\n", divisiveis(arr1, tam1, x)); 


  return 0;
}