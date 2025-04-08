#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxEven;
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            maxEven = arr[i]; 
            break;
        }
    }
    if(i == n) {
        printf("-1\n");
        return 0;
    }
    for(; i < n; i++) {
        if(arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }
   printf("%d\n", maxEven);
    return 0;
}
