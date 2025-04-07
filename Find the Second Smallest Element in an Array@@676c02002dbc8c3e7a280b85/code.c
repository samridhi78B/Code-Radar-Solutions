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
  int smin = INT_MAX;
  for(int i = 0; i < n; i++){
      if(min > arr[i]){
          min = arr[i];
      }
  }
  for(int i = 0; i < n; i++){
      if(arr[i] != min &&  smin>arr[i]){
          smin= arr[i];
      }
  }
  printf("%d", smin);
    return 0;
}