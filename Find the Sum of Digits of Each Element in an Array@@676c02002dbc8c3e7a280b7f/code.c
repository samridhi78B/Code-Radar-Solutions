#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int sum = 0;

        if (num < 0) num = -num;  

        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        printf("%d ", sum);
    }

    return 0;
}
