#include <stdio.h>
int main() {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    float c = a*b;
    printf("Product: %.2f", c);

    return 0;
}