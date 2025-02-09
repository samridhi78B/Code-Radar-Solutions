#include <stdio.h>
    void dectobin(int n){
        if(n>1)
        dectobin(n/2);
        printf("%d", n %2 );
    }
    int main(){
        int num;
        scanf("%d", &num);
        dectobin(num);
    return 0;
}