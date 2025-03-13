#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100.stdin);
    int a = strlen(myarr);
    int count = 0;
    for(int i = 0;i<a;i++) {
        if ((myarr[i] != ' ') && (myarr[i-1] != ' ') &&myarr[i+1]) {
            count ++;
        }
        printf("%d",count);
    }
}