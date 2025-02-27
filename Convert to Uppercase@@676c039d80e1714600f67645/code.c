#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%d",&a);
    for(int i=0;i<strlen(a);i++) {
        int c = a[i];
        c = c-32;
        printf("%c",c);
    }
}