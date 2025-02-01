#include <stdio.h>
#include <ctype.h>
int main() {
char a;
scanf("%c", &a);
if(isaplha(a)){
a = tolower(a);
if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
    printf("Vowel");
}
else{
    printf("Consonant");
}
}
else if(isdigit(a)){
    printf("Digit");
}
else{
    printf("Special character");
}
    return 0;
}