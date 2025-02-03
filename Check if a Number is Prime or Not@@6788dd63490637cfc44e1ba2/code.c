#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    if(n<=1){
        printf("Not Prime");
    }
    else{
        for(int i = 1, i<=n; i++){
            if(n%i == 0)
            cnt++;
        }
        if(cnt > 2){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}