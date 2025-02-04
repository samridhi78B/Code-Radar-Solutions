#include <stdio.h>
int main() {
   int n,p;
   scanf("%d %d", &n, &p);
   int m = ~(1<<p);
    n &= m;
    printf("%d %d", p,n);
    return 0;
}