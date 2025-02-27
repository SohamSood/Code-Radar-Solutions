#include <stdio.h>
#include <string.h>
int main() {
    char aa[100];
    scanf("%s",aa);
    for(int i=0;i<strlen(aa);i++) {
        if(aa[i] >= 'a' && aa[i] <= 'z') {
            char k = aa[i] -32;
            printf("%c",k);
        } else if ( a[i] == ' ') {
            printf(" ");
        } else {
            printf("%c",aa[i]);
        }
    }
}