#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%c",a);
    for(int e = strlen(a);e>0;e++) {
        printf("%c",a[e]);
    }
}