#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max;  // Before updating max, assign it to smax
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    if (smax == INT_MIN) {
        printf("-1\n"); // No second max
    } else {
        printf("%d\n", max * smax); // Product of max and smax
    }

    return 0;
}

