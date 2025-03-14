#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int pallindrome(char *myarr) {
    int a = strlen(myarr);
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-1-i];
    }
    if ((strcmp(myarr,myarr2)) == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    int b = pallindrome(myarr);
    printf("%d",b);
}