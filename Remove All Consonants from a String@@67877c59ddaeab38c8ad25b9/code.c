// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[100];
    fgets(a,100,stdin);
    char vowels[11] = {'a','i','e','o','u','A','E','O','I','U',' '};
    for(int i=0;i<strlen(a);i++) {
        if(isdigit(a[i])){
            printf("%c",a[i]);
        }
        for(int j = 0;j<11;j++) {
            if((a[i] == vowels[j])){
                printf("%c",a[i]);
            }
        }
    }

}