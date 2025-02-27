#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    for(int e = 0;e<strlen(a);e++) {
        int i = 0;
        if(a[i] != b[((int)strlen(b))-i])
    }
}