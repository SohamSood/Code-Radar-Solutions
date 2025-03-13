#include <stdio.h>
#include <string.h>
int main() {
    char myarr[100];
    char myarr2[100];
    scanf("%s",myarr);
    scanf("%s",myarr2);
    int a = strlen(myarr);
    int b = strlen(myarr2);
    int e = 0;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if((myarr[i] == myarr2[j]) && (e == 0)) {
                for(int k = 0;k<a;k++) {
                    if((i+k) == a) {
                        i = -k;
                    }
                    if((j+k) == a) {
                        j = -k;
                    }
                    if(myarr[i+k] == myarr2[j+k]) {
                        e++;
                    }
                }
            }
        }
    }
    if(a == b) {
        if(e == a) {
            printf("Yes");
        } else {
            printf("No");
        }
    } else {
        printf("No");
    }
}