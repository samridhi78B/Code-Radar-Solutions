#include <stdio.h>

int contains(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val)
            return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n); // size of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // array elements
    }

    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int length = 1;

        while (contains(arr, n, current + 1)) {
            current++;
            length++;
        }

        if (length > maxLen) {
            maxLen = length;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
