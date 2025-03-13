#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i = 0;
    for(int e = 0;e<strlen(a);e++) {
        if(a[e] != b[((int)strlen(b))-e]) {
            i++;
        }
    }
    if(i == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}