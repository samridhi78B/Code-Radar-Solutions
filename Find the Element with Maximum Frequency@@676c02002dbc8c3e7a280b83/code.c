#include <stdio.h>

int main() {
    int arr[100], freq[100] = {0};
    int n, i, j, max = 0, element;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] != -1) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1;
                }
            }
            freq[i] = count;
        }
    }
    for (i = 0; i < n; i++) {
        if (freq[i] > max) {
            max = freq[i];
            element = arr[i];
        }
    }

    printf("%d", element);

    return 0;
}

