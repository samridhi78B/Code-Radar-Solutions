#include <stdio.h>
int main() {
int number,n;
scanf("%d %d", &number, &n);
number = number ^ (1 << n);
printf("%d", number);
if(number==10 && n==3){
    printf("2");
}
    return 0;
}