#include <stdio.h>
int main() {
int a,b;
char c;
scanf("%d %d", &a, &b);
scanf("%c", &c);
if(c == '+'){
    printf("%d", a+b);
}
// switch(c){
//     case '+':
//     printf("%d", a+b);
//     break;
//     case '-':
//     printf("%d", a-b);
//     break;
//     case '*':
//     printf("%d", a*b);
//     break;
//     case '/':
//     printf("%d", a/b);
//     break;
//     default:
//     printf("error");
// }

    return 0;
}