#include <stdio.h>
int main() {
    int rows, i,j,num = 1;
    scanf("%d", &rows);
    for(i = 1; i <= rows +1 ; i ++){
        for(j = 1; j <= i; j++){
            printf("%d ", i);
            num++;
        }
        printf("\n");
    }
    return 0;
}