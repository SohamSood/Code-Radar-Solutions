// Your code here...
#include <string.h>
#include <stdio.h>

int main() {
    char myarr[100];
    char myarr2[100];
    fgets(myarr, 100, stdin);
    scanf(" %s",myarr2);
    int a = strlen(myarr);
    int b = strlen(myarr2);
    int e = 0;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<b;j++) {
            if((myarr2[j] == myarr[i])&&(e == 0)) {
                for(int k = j;k<b;k++) {
                    if(myarr[i+k] == myarr2[j+k]) {
                        e++;
                    }
                }
            }
        }
    }
    // printf("%d",e);
    if(e == b) {
        printf("Yes");
    } else {
        printf("No");
    }
}