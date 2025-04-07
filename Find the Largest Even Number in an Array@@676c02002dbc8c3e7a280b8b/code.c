#include <stdio.h>

int main(){
    int n, count =0;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
int max = arr[0];
for(int i = 0; i<n; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
if(arr[i] == max){
    count++;
    printf("%d", count);
}

return 0;
}