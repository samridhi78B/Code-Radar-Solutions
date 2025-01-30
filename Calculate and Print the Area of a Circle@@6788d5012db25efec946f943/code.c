#include <stdio.h>
#include <math.h>
int main(){
    float r;
    scanf("%f", &r);
    float c = M_PI * r * r;
    printf("Area: %.2f",c );
    return 0;
}