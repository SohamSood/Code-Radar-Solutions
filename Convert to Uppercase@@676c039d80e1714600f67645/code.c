#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%d",&a);
    for(int i=0;i<strlen(a);i++) {
        printf("%c",char(a[i])-32);
    }
}