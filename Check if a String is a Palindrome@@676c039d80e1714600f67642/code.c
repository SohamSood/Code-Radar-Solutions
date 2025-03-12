
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rev(char *myarr,int a) {
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-1-i];
    }
    for(int i = 0;i<a;i++) {
        printf("%c \n",myarr2[i]);
    }
    if (strcmp(myarr, myarr2) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}
int main() {
    char myarr[100];
    fgets(myarr, 100, stdin);
    int a = strlen(myarr);
    rev(myarr,a);
}