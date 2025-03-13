#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    int maxx = 0;
    for(int j = 0;j<a;j++) {
        int streak = 0;
        for(int i = 0;i<a;i++) {
            int count = 0;
            if ((myarr[i] != ' ') && ((myarr[i+1] != ' ') || (myarr[i-1] != ' '))) {
                count++;                        
            }
            if(count == 1) {
                maxx++;
            } else {
                maxx = 0;
            }      
        }
        printf("%d %c \n",maxx,myarr[j]);
    }
}