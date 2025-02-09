#include <stdio.h>
int main() {
    int n,j,i;
    char ch;
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        ch ='A';
        for(j=1;j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}