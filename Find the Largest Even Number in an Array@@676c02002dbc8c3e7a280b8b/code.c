#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -1; // Sentinel value to indicate no even number found yet

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (max == -1 || arr[i] > max) {
                max = arr[i];
            }
        }
    }

    if (max == -1) {
        printf("-1\n");
    } else {
        printf("%d", max);
    }

    return 0;
}

