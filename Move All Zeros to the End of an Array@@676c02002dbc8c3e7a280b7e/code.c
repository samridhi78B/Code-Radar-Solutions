#include <stdio.h>

int main() {
    int arr[100], temp[100], n, j = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }
    while (j < n) {
        temp[j++] = 0;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
