#include <stdio.h>
#include <string.h>
int main() {
    char myarr[100];
    scanf("%s",&myarr);
    int e = 0;
    for(int i = 0;i<strlen(myarr);i++) {
        if ((myarr[i] != '0')&&(myarr[i]!='1')) {
            e++;
        }
    }
    if(e == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}