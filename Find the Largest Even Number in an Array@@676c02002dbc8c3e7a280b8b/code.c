#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -1;  // Start with -1 assuming no even numbers

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (max == -1 || arr[i] > max) {
                max = arr[i];
            }
        }
    }

    printf("%d\n", max);  // Will print -1 if no even numbers were found

    return 0;
}


