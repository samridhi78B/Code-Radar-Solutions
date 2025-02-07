#include <stdio.h>
int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    if(n & (1<<n)){
        printf(1);
    }
    else{
    printf(0);
    }
    return 0;
}