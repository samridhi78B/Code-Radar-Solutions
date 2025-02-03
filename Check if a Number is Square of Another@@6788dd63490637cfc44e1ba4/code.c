#include <stdio.h>
int main() {
int a,b;
scanf("%d %d", &a,&b);
int c = a**a;
if(c%b==0){
    printf("Yes");
}
else{
    printf("No");
}
    return 0;
}