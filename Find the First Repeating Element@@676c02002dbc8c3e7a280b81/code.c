#include <stdio.h>
int main() {
    int arr[100], n, i, j, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d", arr[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("-1");
    }

    return 0;
}
