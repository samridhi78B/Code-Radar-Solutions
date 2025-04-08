#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    if (n <= 0) return 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    k = k % n;

    // Step 1: Reverse whole array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 2: Reverse first k elements
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 3: Reverse remaining n-k elements
    for (int i = k, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

