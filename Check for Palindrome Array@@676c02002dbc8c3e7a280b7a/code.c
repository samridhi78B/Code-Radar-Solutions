#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int palidrome = 1;
    int arr[n];
    for(int i = 0; i< n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){
            palidrome = 0;
            break;
        }
    }
    if(palidrome) printf("YES");
    else printf("NO");
    
    return 0;
}