#include <stdio.h>
int main(){
    int n, unique = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            unique++;
        }
        printf("%d", count);
    }
}