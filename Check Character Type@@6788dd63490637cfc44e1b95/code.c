#include <stdio.h>
#include <ctype.h>
int main() {
    char vowels[10]={'a','e','i','o','u','A','I','E','O','U'};
    char a;
    scanf("%c",&a);
    if (isdigit(a)) {
        printf("Digit");
    } else if(isalpha(a)) {
        int k = 0;
        for (int i =0;i<10;i++) {
            if (a == vowels[i]) {
                printf("Vowel");
                k++;
            }
        }
        if(k == 0) {
            printf("Consonant");
        }
         
    } else {
        printf("Special Character")
    }
}