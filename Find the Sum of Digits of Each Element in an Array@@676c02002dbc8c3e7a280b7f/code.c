#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // read elements
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int sum = 0;

        if (num < 0) num = -num;  

        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}
