#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    maxx = count;
    for(int j = 0;j<a;j++) {
        int count = 0;
        for(int i = 0;i<a;i++) {
            if ((myarr[i] != ' ') && (myarr[i-1] != ' ')) {
                count ++;
            }
        }
        if(count > maxx) {
            maxx = count;
        }
    }
}