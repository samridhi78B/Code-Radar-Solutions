#include <stdio.h>

int main() {
    int arr[100], n, isInc = 1, isDec = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isDec = 0; 
        } else if (arr[i] > arr[i + 1]) {
            isInc = 0; 
        }
    }

    if (isInc || isDec) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
