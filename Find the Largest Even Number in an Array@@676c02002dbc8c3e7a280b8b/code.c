#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; 

     for(int i=0;i<n;i++){
        if(max<arr[i] && arr[i]%2==0){
            max=arr[i];
        }
    }

    if (max == -1) {
        printf("-1\n");
    } else {
        printf("%d", max);
    }

    return 0;
}

