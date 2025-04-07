#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
  int arr[n];
  for(int i = 0; i<n; i++){
    scanf("%d", &n);
  }
  int min = arr[0];
  int smin = __INT_MAX__;
  for(int i = 0; i < n; i++){
      if(min > arr[i]){
          min = arr[i];
      }
  }
  printf("Smallest: %d\n", min);
  for(int i = 0; i < n; i++){
      if(arr[i] != min &&  smin>arr[i]){
          smin= arr[i];
      }
  }
  printf("%d", smin);
    return 0;
}