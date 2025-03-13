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
        for(int i = 0;i<a;i++) {
            if ((myarr[i] != ' ') || (myarr[i+1] != ' ')) {
                count++;
                } else {
                    count = 0;
                }
                
            }
        printf("%c %d \n",myarr[j],count);
        }
        
    // printf("%d",maxx);
}