#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int smax = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    if (smax == arr[0]) {
        printf("-1\n");
    } else {
        printf("%d", max * smax);
    }

    return 0;
}
