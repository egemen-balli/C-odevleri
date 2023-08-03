#include <stdio.h>
int main() {
  int arr[] = {5, 7, 4};
  int max = arr[0];
  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 1; i < length; i++)
  {
    if(arr[i] > max){
      max = arr[i];
    }
  }
  
  printf("Dizinin En Buyuk Elemani: %d", max);

  return 0;
}