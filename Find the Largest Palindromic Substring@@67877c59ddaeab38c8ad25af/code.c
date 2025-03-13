#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int pallindrome(char *myarr,int a) {
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-1-i];
    }
    printf("%s",myarr2);
}
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    pallindrome(myarr,a);
}