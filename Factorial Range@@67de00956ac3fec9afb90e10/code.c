// Your code here...
#include <stdio.h>
int factorial(int num) {
int fact = 1;
for(int i = 2; i <= num; i++){
    fact *= i;
}
return fact;
}
void factorialRange(int start, int end){
   if(start > end || start < o){
    printf("Invalid Range");
    return;
   }
   for(int i = start; i <= end; i++){
    printf("%d! = %d", i, factorial(i));
   }
}
