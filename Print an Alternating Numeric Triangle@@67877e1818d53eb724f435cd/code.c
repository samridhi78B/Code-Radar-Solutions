#include <stdio.h>
int main() {
    int n,j,i;
    scanf("%d", &n);
    for(i=1;i<=n,i++){
        for(j=0; j < i; j++){
            printf("%d ", j % 2);
        }
        printf("\n");
    }
    return 0;
}