#include <stdio.h>
int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    p = (n & (1<<n));
    printf("%d", p);
    return 0;
}