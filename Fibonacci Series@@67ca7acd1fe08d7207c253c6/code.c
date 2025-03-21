#include <stdio.h>
void fibonacciSeries(int c){
    int a =0, b =1, next;
    for(int i = 1; i<=c ; i++){
        printf("%d ", a);
        next = a+b;
        a=b;
        b = next;
    }
}