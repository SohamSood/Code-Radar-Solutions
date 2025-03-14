#include <stdio.h>
#include <string.h>
int check(char myarr[][100],char *myarr2,int a) {
    for(int i = 0;i<a;i++) {
        if ((strcmp(myarr[i],myarr2)) == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    char myarr2[100][100];
    // for(int i = 0;i<a;i++) {
    //     for(int j =0;j<a;j++) {

    //     }
    // }
}
