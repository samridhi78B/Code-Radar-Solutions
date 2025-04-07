#include <stdio.h>
int main(){
    int n, evenSum= 0, oddSum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0; i<n; i++){
        if(arr[i] % 2 == 0){
            evenSum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
        printf("%d %d", evenSum, oddSum);
    }
    

    
}