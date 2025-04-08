#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int all_same = 1; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i > 0 && arr[i] != arr[i - 1]) {
            all_same = 0;
        }
    }

    if (all_same) {
        printf("-2\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if ((i == 0 && arr[i] >= arr[i + 1]) ||
            (i == n - 1 && arr[i] >= arr[i - 1]) ||
            (i > 0 && i < n - 1 && arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])) {
            printf("%d\n", arr[i]); 
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}

