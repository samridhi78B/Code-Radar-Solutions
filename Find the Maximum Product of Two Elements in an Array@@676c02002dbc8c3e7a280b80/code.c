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

    // Find max
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find second max (not equal to max)
    for (int i = 0; i < n; i++) {
        if (arr[i] != max && arr[i] > smax) {
            smax = arr[i];
        }
    }

    if (smax == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", max * smax);
    }

    return 0;
}
