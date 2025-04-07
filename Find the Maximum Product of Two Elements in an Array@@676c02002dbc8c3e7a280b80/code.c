#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, smax = INT_MIN;
    int min = INT_MAX, smin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }

        if (arr[i] < min) {
            smin = min;
            min = arr[i];
        } else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i];
        }
    }

    if ((smax == INT_MIN && smin == INT_MAX) || (n < 2)) {
        printf("-1\n");
    } else {
        int prod1 = max * smax;
        int prod2 = min * smin;
        int result = (prod1 > prod2) ? prod1 : prod2;
        printf("%d", result);
    }

    return 0;
}

