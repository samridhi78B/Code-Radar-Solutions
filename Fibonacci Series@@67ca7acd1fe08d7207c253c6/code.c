#include <stdio.h>
void fibonacciSeries(int c){
    int a =0, b =1;
    for(int i = 1; i<=c ; i++){
        printf("%d", a);
        c = a+b;
        a=b;
        b = c;
    }
}