// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    char d;
    scanf("%s",a);
    getchar();
    scanf("%c",&d);
    char vowels[10] = {'a','i','e','o','u','A','E','O','I','U'};
    for(int i = 0;i<strlen(a);i++) {
        int e = 0;
        for(int j = 0;j<10;j++) {
            if(a[i] == vowels[j]) {
                e++;
            }
        }
        if(e == 0) {
            printf("%c",a[i]);
        } else {
            printf("%c",d);
        }
    }
}