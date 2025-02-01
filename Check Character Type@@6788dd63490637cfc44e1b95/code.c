#include <stdio.h>
int main() {
char a;
scanf("%c", &a);
char b = tolower(a);
if(b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U'){
    printf("Vowel");
}
else{
    printf("Consonant");
}
    return 0;
}