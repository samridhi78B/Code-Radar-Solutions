#include <stdio.h>
int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    if(n & (1<<n)){
        printf("dth", n);
    }
    else{
    printf("%d", n);
    }
    return 0;
}