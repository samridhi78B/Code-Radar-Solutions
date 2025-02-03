#include <stdio.h>
#include <ctype.h>
int main() {
char a;
scanf("%c", &a);
if(isalpha(a)){
a = tolower(a);
if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
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