#include <stdio.h>
int main() {
    int n,j,i,num;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        num = (i%2==0) ? 0: 1;
        for(j=1; j <= i; j++){
            printf("%d ", num);
            num = 1-num;
        }
        printf("\n");
    }
    return 0;
}