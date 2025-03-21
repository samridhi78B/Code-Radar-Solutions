#include <stdio.h>
#include <math.h>
int prime(int r){
    if( r <= 1){
        return 0;
    }
    for(int i = 2; i <= n -1; i++){
        if( r % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n, num ;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", num);
        printf("%d\n" prime(num));
    }
}