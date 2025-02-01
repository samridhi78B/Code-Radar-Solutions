#include <stdio.h>
int main() {
char a;
scanf("%c", &a);
char a = tolower(a);
if(a){
    printf("Lowercase");
}
else{
    printf("Uppercase");
}
    return 0;
}