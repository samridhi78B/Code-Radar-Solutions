#include <stdio.h>
int main() {
char a;
scanf("%c", &a);
char c = tolower(a);
if(a){
    printf("Lowercase");
}
else{
    printf("Uppercase");
}
    return 0;
}