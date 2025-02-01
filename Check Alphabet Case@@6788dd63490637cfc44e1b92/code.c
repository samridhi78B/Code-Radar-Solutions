#include <stdio.h>
int main() {
char a;
scanf("%d", &a);
char c = tolower(a);
if(a){
    printf("Lowercase");
}
else{
    printf("Uppercase");
}
    return 0;
}