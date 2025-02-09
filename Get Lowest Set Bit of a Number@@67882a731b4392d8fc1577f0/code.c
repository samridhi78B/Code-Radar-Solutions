#include <stdio.h>
int main() {
    int n,p=0;
    scanf("%d", &n);
    while((n & 1) == 0){
        n >>= 1;
        p++;
    }
    printf("%d", p);
    return 0;
}