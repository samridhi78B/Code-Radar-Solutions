#include <stdio.h>
void reverse(int arr[], int si, int ei){
    for(int i = si, j = ei; i<j; i++, j++){
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
    }
    return;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    k = k %n;
    reverse(arr, n,k);
    for(int i = 0; i<n; i++){
        printf("%d", &arr[i]);
    }
}