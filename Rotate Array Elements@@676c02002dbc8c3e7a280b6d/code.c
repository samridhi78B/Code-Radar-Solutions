#include <stdio.h>

void reverse(int arr[], int si, int ei){
    for(int i = si, j = ei; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    k = k % n;

    // Step 1: Reverse the whole array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse remaining n-k elements
    reverse(arr, k, n - 1);

    // Print result
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

