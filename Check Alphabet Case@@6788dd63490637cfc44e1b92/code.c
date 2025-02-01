#include <stdio.h>
int main() {
char a;
scanf("%d", &a);
char c = tolower(a);
if(c){
    printf("Uppercase");
}
else{
    printf("Lowercase");
}
    return 0;
}