#include <stdio.h>
#include <string.h>
int main() {
    char myarr[100];
    char myarr2[100];
    scanf("%s",myarr);
    scanf("%s",myarr2);
    int a = strlen(myarr);
    int e = 0;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i] == myarr2[j]) {
                for(int k = 0;k<a;k++) {
                    if(myarr[i+k] == myarr2[j+k]) {
                        e++;
                    }
                }
            }
        }
    }
    printf("%d",e);
}