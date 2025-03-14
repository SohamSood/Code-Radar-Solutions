// Your code here...
#include <stdio.h>
#include <string.h>
int reverse(char myarr[]) {
    int a = strlen(myarr);
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-i-1];
    }
    printf("%s ",myarr2);
}