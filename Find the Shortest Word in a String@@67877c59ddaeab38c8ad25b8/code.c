#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    int maxx = 0;
    for(int j = 0;j<a;j++) {
        int count = 0;
        if ((myarr[j] != " ") && (myarr[j-1] = " ")) {
            for(int i = j;i<a;i++) {
                if(myarr[i] == ' ') {
                    break;
                } else {
                    count++;
                }
            }
        }
        if(count>maxx) {
            maxx = count;
        }
        printf("%d %c \n",maxx,myarr[j]);
    }
}