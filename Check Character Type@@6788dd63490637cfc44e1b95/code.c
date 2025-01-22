#include <stdio.h>
#include <ctype.h>
int main() {
    char vowels[10]={'a','e','i','o','u','A','I','E','O','U'};
    char a;
    scanf("%c",&a);
    if (isdigit(a)) {
        printf("Digit");
    } else if(isalpha(a)) {
        for (int i =0;i<10;i++) {
            if (a == vowels[i]) {
                printf("Vowel");
            }
        }
    }
}