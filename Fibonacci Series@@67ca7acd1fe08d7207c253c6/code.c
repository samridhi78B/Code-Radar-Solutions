#include <stdio.h>
int fibonacciSeries(int c){
    int i,a =0; b =1;
    for(i = 1; i<=c ; i++){
        printf("%d", a);
        c = a+b;
        a=b;
        b = c;
    }
}