#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = 1;

    while (1) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == missing) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%d\n", missing);
            break;
        }
        missing++;
    }

    return 0;
}
