#include <stdio.h>
#include <string.h>
int main() {
    char aa[100];
    fgets(aa, sizeof(aa), stdin);
    for(int i=0;i<strlen(aa);i++) {
        if(aa[i] >= 'a' && aa[i] <= 'z') {
            char k = aa[i] -32;
            printf("%c",k);
        } else if ( aa[i] == ' ') {
            printf(" ");
        } else {
            printf("%c",aa[i]);
        }
    }
}