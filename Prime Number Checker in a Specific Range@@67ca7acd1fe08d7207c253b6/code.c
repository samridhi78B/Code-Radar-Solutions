#include <stdio.h>

    int prime(int n);
    if(n <=1 ){
        return 0;
    }
    for(int i = 2; i <= n /2; i++){
        if(n % i == 0){
            return 0;
        }
        
    }
    return 1;
    int main(){
        int start, end;
        scanf("%d %d", &start, &end);
        for(int i = start; i<= end; i++){
            if(prime(i)){
                printf("%d ", i);
            }
        }
    }
    return 0;
