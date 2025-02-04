#include <stdio.h>
int main() {
int number,n;
scanf("%d %d", &number, &n);
int a = 1 << n;
number |= a;
printf("%d", a);
  return 0;
}