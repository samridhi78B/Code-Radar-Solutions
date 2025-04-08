#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        int already_counted = 0;

        // check if already counted
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                already_counted = 1;
                break;
            }
        }

        if (already_counted)
            continue;

        // count frequency
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        printf("%d => %d times\n", arr[i], count);
    }

    return 0;
}
