#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
   int maxEven = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }
printf("%d", maxEven);
return 0;
}