#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%d",&a);
    for(int i=0;i<strlen(a);i++) {
        char k = a[i] -32;
        printf("%c",k);
    }
}